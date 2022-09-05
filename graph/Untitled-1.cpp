#include <iostream>

#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int c,d,l;
	    cin>>c>>d>>l;
	    if(l%4==0)
	    {
	       if(d>=c||d*2>=c)
	       {
	            
	           if(d*4<=l<=(d+c)*4)
	           {
	                cout<<"yes"<<endl;
	           }
	            else
	            {
	                cout<<"no"<<endl;
	            }
	        }
	        else
	        {
	            int a = c-d*2;
                a = a+d;
                if((a*4)<=l<=(d+c)*4)
	            {
	                cout<<"yes"<<endl;
	            }
	            else
	            {
	                cout<<"no"<<endl;
	            }
	        }
	        
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
