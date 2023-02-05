//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    int funl(vector<long long> nums, long long target){
        int anwe=-1;
        int l=0,h=nums.size()-1;
        while(l<=h){
            int m = l+(h-l)/2;
            if(nums[m]==target){
                anwe=m;
                h=m-1;
            }
            else if(nums[m]<target)
            l=m+1;
            else if(nums[m]>target)
            h=m-1;
        }
        return anwe;
    }
    int funr(vector<long long> nums, long long target){
        int anw=-1;
        int l=0,h=nums.size()-1;
        while(l<=h){
            int m = l+(h-l)/2;
            if(nums[m]==target){
                anw=m;
                l=m+1;
            }
            else if(nums[m]<target)
            l=m+1;
            else if(nums[m]>target)
            h=m-1;
        }
        return anw;
    }
    public:
    pair<long,long> indexes(vector<long long> nums, long long target)
    {
        // code here
        pair<long,long>p;
        p.first=funl(nums,target);
        p.second=funr(nums,target);
        return p; 
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends