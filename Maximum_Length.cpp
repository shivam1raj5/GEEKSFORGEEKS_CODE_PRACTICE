//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        // code here
          int arr[3];
        
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        
        sort(arr,arr+3);
        
        if(arr[2]> (2*(arr[0]+arr[1]))+2)
        return -1;
        
        else 
        return a+b+c;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends