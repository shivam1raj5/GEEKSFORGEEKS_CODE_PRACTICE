//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};


// } Driver Code Ends
/*
// structure of the node is as follows

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        set<int> v;
        Node *ptr=head1;
        while(ptr != NULL){
            v.insert(ptr->data);
            ptr=ptr->next;
        }
        ptr=head2;
        while(ptr != NULL){
            v.insert(ptr->data);
            ptr=ptr->next;
        }
        Node *ans = new Node(0);
        ptr=ans;
        for(auto it=v.begin();it!=v.end();it++){
            int f=(*it);
            ptr->data=f;
            
            Node *n=new Node(0);
            ptr->next=n;
            ptr=ptr->next;
        }
        ptr=ans;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=NULL;
        return ans;
    }
};


//{ Driver Code Starts.

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends