#include<stdio.h>



void task(int arr[],int n)
{
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > arr[max])
        {
            max = i;
        }
        else
        {
            continue;
        }
    }
    

	for(int j = max; j < n - 1; j++)
	{
		arr[j] = arr[j + 1];
	}

}

int main()
{
    int n;
    
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter the value at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nBefore deletion: ");
    for(int i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    task(arr,n);
    printf("\nAfter deletion: ");
    for(int i =0;i<n-1;i++)
	{
		printf("\t%d",arr[i]);
	}
}


