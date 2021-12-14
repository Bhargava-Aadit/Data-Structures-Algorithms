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
	int size;
	cin >> size;
	for(int i=1; i<=size; ++i)
	{
	    int x;
	    cin >> x;
	    addNode(head, x);
	}
	display(head);
}