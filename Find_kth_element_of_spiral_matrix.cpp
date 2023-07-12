//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		int r,l,u,d;
 		r=m;
 		l=-1;
 		u=-1;
 		d=n;
 		char dir='r';
 		int x=0,y=0;
 		--k;
 		while(k--)
 		{
 		    if(dir=='r')
 		    {
 		        if(y+1<r)
 		        {
 		            ++y;
 		            continue;
 		        }
 		        else
 		        {
 		            ++u;
 		            ++x;
 		            dir='d';
 		        }
 		        continue;
 		    }
 		    if(dir=='d')
 		    {
 		        if(x+1<d)
 		        {
 		            ++x;
 		            continue;
 		        }
 		        else
 		        {
 		            --r;
 		            --y;
 		            dir='l';
 		        }
 		        continue;
 		    }
 		    if(dir=='l')
 		    {
 		        if(y-1>l)
 		        {
 		            --y;
 		            continue;
 		        }
 		        else
 		        {
 		            --d;
 		            --x;
 		            dir='u';
 		        }
 		        continue;
 		    }
 		    if(dir=='u')
 		    {
 		        if(x-1>u)
 		        {
 		            --x;
 		            continue;
 		        }
 		        else
 		        {
 		            ++l;
 		            ++y;
 		            dir='r';
 		        }
 		        continue;
 		    }
 		}
 		return a[x][y];
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends