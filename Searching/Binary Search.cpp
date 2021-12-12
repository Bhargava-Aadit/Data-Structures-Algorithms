#include <bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[], int n, int x)
{
	int s = 0;
	int e = n-1;
	while(s <= e)
	{
		int mid = (s+e)/2;
		if(arr[mid]==x) return mid;
		else if(arr[mid] > x) e = e-1;
		else if(arr[mid] < x) s = s+1;
	}
	return -1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; ++i) cin >> arr[i];
	    int x;
	    cin >> x;
	    // Note: We will have to sort the array as Binary Search works on sorted arrays
	    sort(arr, arr+n);
	    int res = Binary_Search(arr, n, x);	
	    if(res == -1) cout << "Element not Found" << endl;
	    else cout << "Element found at Position: " << res+1 << endl;	
	}
	return 0;
}