//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
   void solve(stack<int>& st, deque<int>& dq){

       if(st.size()==0){

            return;

        }

        int val = st.top();

        st.pop();

        dq.push_back(val);

        solve(st, dq);

        int val2 = dq.front();

        dq.pop_front();

        st.push(val2);

   }

 

    void Reverse(stack<int> &St){

        if(St.size()==0){

            return;

        }

        // int val = St.top();

        // St.pop();

        

        // St.push(val);

        deque<int> dq;

        solve(St, dq);}
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends