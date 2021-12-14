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

void deleteHeadNode(Node* &head)
{
	Node* nodeDelete = head;
	head = head->next;
	delete nodeDelete;
}

void deleteNode(Node* &head, int val)
{
	Node* temp = head;
	while(temp->next->data != val)
	{
		temp = temp->next;
	}
	Node* nodeDelete = temp->next;
	temp->next = temp->next->next;
	delete nodeDelete;
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
	cin >> size; // 5
	for(int i=1; i<=size; ++i)
	{
	    int x;
	    cin >> x; // 1 2 3 4 5
	    addNode(head, x);
	}
	// Driver Code End
	cout << "Before Deletion: " << endl;
	display(head);
	deleteNode(head, 3);
	deleteHeadNode(head);
	cout << "After Deletion: " << endl;
	display(head);
}
/*
Output:
Before Deletion: 
1->2->3->4->5->NULL
After Deletion: 
2->4->5->NULL
*/
