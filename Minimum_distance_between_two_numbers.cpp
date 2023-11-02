//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a1[], int n, int x, int y) {
        // code here
         int a=-1;
        int b=-1;
        int d=n+1;
        for(int i=0;i<n;i++){
            if(a1[i]==x){
                a=i;
            }
            if(a1[i]==y){
                b=i;
            }
            if(a!=-1 && b!=-1){
                int diff=abs(a-b);
                d=min(d,diff);
            }
        }
        if(d>=n){
            return -1;
        }
        return d;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends