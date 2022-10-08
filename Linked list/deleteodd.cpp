#include <iostream>
#define ll long long
#include<algorithm>
#include<vector>
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
	    int q;
	    cin>>q;
	    while(q--)
	    {
	        int p,k;
	        cin>>p>>k;
            int arr2[n];
            for(int i=0;i<n;i++)
            {
                arr2[i] = arr[i];
            }
	        vector<int> index;
	        vector<int> ele;
	        for(int i=0;i<n;i++)
	        {
	            if(arr[i]%p==0)
	            {
	                index.push_back(i);
	                ele.push_back(arr[i]);
                }
            }
            sort(ele.begin(),  ele.end()    );
            for(int i=0;i<index.size();i++)
            {
                arr2[index[i]] = ele[i];
            }
            ll sum = 0;
            for(int i=0;i<k;i++)
            {
                sum = sum+arr2[i]; 
            }
            cout<<sum<<endl;
	    }
	    
	}
	return 0;
}