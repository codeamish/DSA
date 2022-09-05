#include<stdio.h>
#include<conio.h>
void Task(int p[],int n)
{
     int i,j=0;
     for(i=0;i<n;i++)
    {
          if(p[i]>p[j])
          {
              
               j=i;
          }
    }
    for(;j<n;j++)
    {
        p[j]=p[j+1];
    }
}
int main()
{
     int a[50],i,j;
     printf("enter no. of elements to work on:");
     scanf("%d",&j);
     for(i=0;i<j;i++)
     {
          printf("a[%d]=",i);
          scanf("%d",&a[i]);
     }
     printf("array:\n");
     for(i=0;i<j;i++)
     printf("%d\t",a[i]);
     Task(a,j);
     printf("\narray after op\n");
     for(i=0;i<j-1;i++)
     printf("%d\t",a[i]);
     return 0;
}