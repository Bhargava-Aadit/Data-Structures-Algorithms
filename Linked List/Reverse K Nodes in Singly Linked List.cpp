#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

	Node(int val)
	{
		data = val;
		next = NULL;
	}
};

// Driver Function
void addNode(Node* &head, int val)
{
	Node* n = new Node(val);
	if(head == NULL)
	{
		head = n;
		return;
	}
	Node* temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}

Node* reverseKList(Node* &head, int k)
{
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;

    int count = 0;
    while(currptr != NULL && count < k)
    {
    	nextptr = currptr->next;

    	currptr->next = prevptr;
    	prevptr = currptr;
    	currptr = nextptr;
    	++count;
    }
    
    if(nextptr != NULL)
    {
        head->next = reverseKList(nextptr, k);
    }
    
    return prevptr;
}

void display(Node* head)
{
	Node* temp = head;
	if(head == NULL)
	{
		cout << "NULL" << endl;
	}
	while(temp != NULL)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
	return;
}

int main()
{
	Node* head = NULL;
	// Driver Code Start
	int size;
	cin >> size; // 6
	for(int i=1; i<=size; ++i)
	{
	    int x;
	    cin >> x; // 1 2 3 4 5 6
	    addNode(head, x);
	}
	int k;
	cin >> k; // 3
	// Driver Code End
	cout << "Before Reversing " << k << " Nodes: " << endl;
	display(head);
	Node* newHead = reverseKList(head, k);
	cout << "After Reversing " << k << " Nodes: " << endl;
	display(newHead);
	return 0;
}
/*
Before Reversing 3 Nodes: 
1->2->3->4->5->6->NULL
After Reversing 3 Nodes: 
3->2->1->6->5->4->NULL
*/
