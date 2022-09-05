#include<stdio.h>

int main()
{
    
    
    int arr[4][4];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("Enter the value at row %d and column %d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Before rotation : ");
    for(int i=0; i<4; i++)
    {
        printf("\n");
        for(int j=0; j<4; j++)
        {
            printf("%d\t",arr[i][j]);

            
        }
    }
    int temp[4][1];
    for(int i=0; i<4; i++)
    {
        temp[i][0] = arr[i][0];
    }
    for(int i=0; i<4; i++)
    {
        for(int j=1; j<4; j++)
        {
            arr[i][j-1] = arr[i][j];
        }
    }
    for(int i=0; i<4; i++)
    {
        arr[i][3] = temp[i][0];
    }
    printf("\nAfter rotation : ");
    for(int i=0; i<4; i++)
    {
        printf("\n");
        for(int j=0; j<4; j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
    





}
