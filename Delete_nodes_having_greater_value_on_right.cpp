//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node* reverse(Node* head){
        Node* pre=NULL,*curr=head,*nxt=head->next;
        while(nxt!=NULL){
            curr->next=pre;
            pre=curr;
            curr=nxt;
            nxt=nxt->next;
        }
        curr->next=pre;
        return curr;
    }
    Node *compute(Node *head)
    {   
        if(head==NULL||head->next==NULL) return head;
        Node* curr=reverse(head);
        int cnt=curr->data;
        head=curr;
        while(curr!=NULL){
            Node* p1=curr->next;
            while(p1!=NULL &&cnt>p1->data){
                p1=p1->next;
            }
            curr->next=p1;
            curr=p1;
            if(p1!=NULL) cnt=p1->data;
        }
        head=reverse(head);
        
        return head;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends