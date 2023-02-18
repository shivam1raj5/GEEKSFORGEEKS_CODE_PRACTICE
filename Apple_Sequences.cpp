//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string shiv){
        // code here 
        int iii = 0, jjj = 0, cntt = 0, anss = 0;
        while(jjj<=n)
        {
            if(cntt > m) cntt -= shiv[iii]=='O', ++iii;
            else 
            {
                anss = max(anss, jjj-iii);
                cntt += jjj<n?shiv[jjj]=='O':0;
                ++jjj;
            }
        }
        return anss;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends