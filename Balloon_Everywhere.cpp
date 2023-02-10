//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        vector<int> shi(26,0);
        for(int i=0;i<s.length();i++){
            shi[s[i]-'a']++;
        }
        int tmp1=s.length(),tmp2=s.length();
        for(int i=0;i<26;i++){
            if(i==0  || i==1 || i==13){
                tmp1=min(tmp1,shi[i]);
            }
            else if(i==14 || i==11){
                tmp2=min(tmp2,shi[i]);
            }
        }
        return min(tmp1,tmp2/2);
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends