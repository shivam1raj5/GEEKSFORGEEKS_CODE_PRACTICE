//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
int tyui(vector<vector<int>> &colors, int N){
        vector<int> vec1(N, 0);
        vector<int> vec2(N, 0);
        vector<int> vec3(N, 0);
        
        vec1[0] = colors[0][0];
        vec2[0] = colors[0][1];
        vec3[0] = colors[0][2];
        
        for(int i=1; i<N; i++){
            vec1[i] = colors[i][0] + min(vec2[i-1], vec3[i-1]);
            vec2[i] = colors[i][1] + min(vec1[i-1], vec3[i-1]);
            vec3[i] = colors[i][2] + min(vec2[i-1], vec1[i-1]);
        }
        
        return min(vec1[N-1], min(vec2[N-1], vec3[N-1]));
    }

    int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
        int nht = tyui(colors, N);
        return nht;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends