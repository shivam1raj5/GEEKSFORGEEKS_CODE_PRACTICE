//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
vector<int> mt;

        vector<int> vt;

    bool sol(int pq,vector<vector<int>>&gq){

        for(int i=0;i<gq[0].size();i++){

            if(gq[pq][i] && !vt[i]){

                vt[i]=1;

                if(mt[i]==-1 || sol(mt[i],gq)){

                    mt[i]=pq;

                    return true;

                }

            }

        }

        return false;

    }

	int maximumMatch(vector<vector<int>>&G){
	    // Code here
	     int pq=G.size();

        int j=G[0].size();

        mt=vector<int>(j,-1);

        int res=0;

        for(int t=0;t<pq;t++){

            vt=vector<int> (j,0);

            if(sol(t,G))  res++;

        }

        return res;

 }

 
	

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int m, n;
		cin >> m >> n;
		vector<vector<int>>G(m, vector<int>(n, 0));
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++)
				cin >> G[i][j];
		}
		Solution obj;
		int ans = obj.maximumMatch(G);
		cout << ans << "\n";    
	}
	return 0;
}
// } Driver Code Ends