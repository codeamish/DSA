#include<iostream>
using namespace std;


int deleteEle(int arr[], int n, int x)
{
	int i = 0;

	for(i = 0; i < n; i++)
	{
		if(arr[i] == x)
			break;
	}

	if(i == n)
		return n;

	for(int j = i; j < n - 1; j++)
	{
		arr[j] = arr[j + 1];
	}

	for(int i =0;i<n-1;i++)
	{
		printf("\t%d",arr[i]);
	}

} 
int main()
{
	int n;
	printf("ENter the calue of n : ");
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		printf("Ente the value at i : ",i);
		scanf("%d", &arr[i]);
	}
	deleteEle(arr,n,2);
	

}
