//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
int mod = 1e9 + 7;
class Solution{   
public:
    int countPaths(int q){
        // code here 
         int shiv[q+1];
      shiv[1]=0;
      shiv[2]=3;
      long long x=3;
      for(int t=3;t<=q;t++)
      {
          x=(x*3)%mod;
          shiv[t]=(x-shiv[t-1]+mod)%mod;
      }
      return shiv[q];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends