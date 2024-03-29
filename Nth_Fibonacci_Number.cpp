//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        int mod=1e9+7;
        int a=1;
        int b=1;
        int c;
        if(n==1){
            return 0;
            
        }
        if(n==2){
            return 1;
        }
        for(int i=3;i<=n;i++){
            c=(a+b)%mod;
            a=b;
            b=c;
        }
        return b;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends