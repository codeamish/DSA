#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    if(n>2)
	    {
	        sort(arr,arr+n);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i];
	    }
	    cout<<endl;
	}
	return 0;
}
