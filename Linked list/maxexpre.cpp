#include <iostream>
using namespace std;
int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    if(n%2==0&&n/2<=2)
	    {
	        cout<<-1<<endl;
	    }
	    else if(n%2==1)
	    {
	        long long second = (n/2)+2;
	        long long first = 1;
	        while(second != n+1)
	        {
	            cout<<first<<" "<<second<<" ";
	            first++;
	            second++;
	        }
	        cout<<first<<endl;
	    }
	    else
	    {
	        long long second = (n/2)+1;
	        long long first = 1;
	        while(second!=n+1)
	        {
	            cout<<first<<" "<<second<<" ";
	            first++;
	            second++;
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
