#include <bits/stdc++.h>
using namespace std;

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
		cout << "Unsorted Array: " << endl;	
		for(int i=0; i<n; ++i)
		{
			cout << arr[i] << " ";
		}	
	    for(int i=1; i<n; ++i)
	    {
	    	int key = arr[i];
	    	int j = i-1;

	    	while(j >= 0 && arr[j] > key)
	    	{
	    		arr[j+1] = arr[j];
	    		j = j-1;
	    	}
	    	arr[j+1] = key;
	    }
	    cout << endl;
	    cout << "Sorted Array: " << endl;
	    for(int i=0; i<n; ++i)
	    {
	    	cout << arr[i] << " ";
	    }
	}
	return 0;
}
