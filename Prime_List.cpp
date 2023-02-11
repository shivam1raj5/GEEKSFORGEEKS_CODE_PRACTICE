//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
bool isPrime(int p){
      if(p==0 || p==1)return false;
      for(int i=2;i*i<=p;i++){
          if(p%i==0)return false;
      }
      return true;
  }
  int prime(int p){
      if(isPrime(p))return p;
      int i=1;
      while(true){
          if(isPrime(p-i))return p-i;
          if(isPrime(p+i))return p+i;
          i++;
      }
  }
    Node *primeList(Node *head){
        Node *t = head;
        while(t!=NULL){
            t->val=prime(t->val);
            t=t->next;
        }
        return head;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends