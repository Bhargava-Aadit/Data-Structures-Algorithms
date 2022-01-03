#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int l)
{
	for(int i=0; i<l; ++i)
	{
		int temp = arr[0];
		for(int j=1; j<n; ++j)
		{
			arr[j-1] = arr[j];
		}
		arr[n-1] = temp;
	}
}

void rightRotate(int arr[], int n, int r)
{
	for(int i=0; i<r; ++i)
	{
		int temp = arr[n-1];
		for(int j=n-1; j>=1; --j)
		{
			arr[j] = arr[j-1];
		}
		arr[0] = temp;
	}
}

int main()
{
	int n;
	cin >> n; // 5
	int arr[n];
	for(int i=0; i<n; ++i) cin >> arr[i]; // 1 2 3 4 5
    
    int l;
    cin >> l; // 2
    leftRotate(arr, n, l);	
    cout << "Array after Left Rotation: " << endl;
    for(int i=0; i<n; ++i) cout << arr[i] << " ";
    cout << endl;

    int r;
    cin >> r; // 2
    rightRotate(arr, n, r);
    cout << "Array after Right Rotation:" << endl;
    for(int i=0; i<n; ++i) cout << arr[i] << " ";	
	
	return 0;
}
/*
Array after Left Rotation: 
3 4 5 1 2 
Array after Right Rotation:
1 2 3 4 5 
*/