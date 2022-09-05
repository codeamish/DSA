#include<stdio.h>


void lRotateOne(int arr[int M][int N])
{
	int temp[M][1];
    for(int i=0;i<M;i++)
    {
        arr[i][0] = temp[i][0]; 
    }

	for(int i = 1; i < M; i++)
	{
		for(int j = 1; j < N; j++)
        {
            arr[i - 1][j-1] = arr[i][j];
        }
    }

    for(int i = 1; i < M; i++)
    {
        arr[i][N] = temp[i][0];
    }

}

int main()
{
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);
    printf("%d",r);
    
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("Enter the value at row %d and column %d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Before rotation : ");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("\nThe value at row %d and column %d is %d  ",i+1,j+1,arr[i][j]);
        }
    }
    printf("\nAfter rotation : ");
    lRotateOne(arr[r][c]);





}
