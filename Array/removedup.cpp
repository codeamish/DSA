#include <iostream>
#include <cmath>
using namespace std;

 int remDups(int arr[], int n)
{
	int res = 1;

	for(int i = 1; i < n; i++)
	{
		if(arr[res - 1] != arr[i])
		{
			arr[res] = arr[i];
			res++;
		}
	}

	return res;
}


int main()
{
	int arr[10] = {1, 3, 3, 4, 5, 7, 7, 8};
	int a = remDups(arr,8);
	cout<<a;
}

