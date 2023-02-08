//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      int fr=0,fc=0;

      long long int lef=n*n;

      vector<int> mr(n+1,0);

      vector<int> mc(n+1,0);

      vector<long long int> an;

      for(auto it: arr){

          int ro = it[0], col = it[1];

          if(!mr[ro]){

              lef -= n-fc;

              fr+=1;

              mr[ro]=1;

          }

          if(!mc[col]){

              lef -= n-fr;

              fc+=1;

              mc[col]=1;

          }

          an.push_back(lef);

      }

      return an;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends