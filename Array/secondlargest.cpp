#include<iostream>
using namespace std;



int seconlarge(int arr[],int n)
{
    int res = -1,largest = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res = largest;largest = arr[i];
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
            {
                res = i;

            }
        }
    }
    return(res);
}


int main()
{
    int arr[10] = {32,521,21,53,23};
    int a = seconlarge(arr,5);
    cout<<a;

} 