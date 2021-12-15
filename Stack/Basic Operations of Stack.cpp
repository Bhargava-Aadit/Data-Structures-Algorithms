#include <bits/stdc++.h>
using namespace std;

#define MAX 100000

class Stack
{
    int top;

public:
	int arr[MAX];

    Stack()
    {
    	top = -1;
    }
    void push(int x);
    void pop();
    void peek();
    void display();
};

void Stack :: push(int x)
{
    if(top >= MAX-1)
    {
    	cout << "Stack Overflow" << endl;
    	return;
    }
    arr[++top] = x;
    cout << x << " is pushed into the Stack" << endl;
    return;
}

void Stack :: pop()
{
	if(top == -1)
	{
		cout << "Stack Undeflow" << endl;
		return;
	}
	int x = arr[top]; --top;
	cout << x << " is popped from the Stack" << endl;
	return;
}

void Stack :: peek()
{
	if(top == -1)
	{
		cout << "Stack Undeflow" << endl;
		return;
	}
	cout << arr[top] << " is at the top of the Stack" << endl;
	return;
}

void Stack :: display()
{
	if(top == -1)
	{
		cout << "Stack is Empty" << endl;
		return;
	}
	cout << "Stack: " << endl;
	for(int i=top; i>=0; --i)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
    Stack S;
    S.display();
    int n;
    cin >> n;
    for(int i=1; i<=n; ++i)
    {
    	int x;
    	cin >> x;
    	S.push(x);
    }
    S.pop();
    S.peek();
    S.display();
	return 0;
}
/*
Output:
Stack is Empty
1 is pushed into the Stack
2 is pushed into the Stack
3 is pushed into the Stack
4 is pushed into the Stack
5 is pushed into the Stack
5 is popped from the Stack
4 is at the top of the Stack
Stack: 
4
3
2
1
*/