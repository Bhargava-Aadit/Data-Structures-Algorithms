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
   	return;
}

void swapNode(Node* &head, int x, int y)
{
	if(x == y) return;
	Node* prevX = NULL;
	Node* currX = head;
	while(currX != NULL && currX->data != x)
	{
        prevX = currX;
        currX = currX->next;
	}

	Node* prevY = NULL;
	Node* currY = head;
	while(currY != NULL && currY->data != y)
	{
		prevY = currY;
		currY = currY->next;
	}

	if(currX == NULL || currY == NULL)
	{
		cout << "Cannot Swap" << endl;
	}

	if(prevX != NULL) prevX->next = currY;
	else head = currY;

	if(prevY != NULL) prevY->next = currX;
	else head = currX;

	Node* temp = currY->next;
	currY->next = currX->next;
	currX->next = temp;
}

void display(Node* head)
{
	Node* temp = head;
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

    int n;
    cin >> n; // 5
    for(int i=0; i<n; ++i)
    {
    	int x; cin >> x; // 1 2 3 4 5
    	addNode(head, x);
    }
    cout << "Before Swapping: " << endl;
    display(head);
    int a,b;
    cin >> a >> b; // 2 4
    swapNode(head, a, b);
    cout << "After Swapping: " << endl;
    display(head);
	return 0;
}
/*
Before Swapping: 
1->2->3->4->5->NULL
After Swapping: 
1->4->3->2->5->NULL
*/