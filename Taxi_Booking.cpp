//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minimumTime(int n,int cur,vector<int> &pos,vector<int> &time){
        vector <int> r;
        for(int i=0;i<n;i++){
            if(cur>pos[i]){
                int a=(cur-pos[i])*time[i];
                r.push_back(a);
            }
            else{
                int a=(pos[i]-cur)*time[i];
                r.push_back(a);
            }
        }
        sort(r.begin(),r.end());
        return r[0];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,cur;
        cin>>N>>cur;
        vector<int> pos(N),time(N);
        for(int i=0;i<N;i++){
            cin>>pos[i];
        }
        for(int i=0;i<N;i++){
            cin>>time[i];
        }
        Solution ob;
        cout<<ob.minimumTime(N,cur,pos,time)<<endl;
    }
}
// } Driver Code Ends