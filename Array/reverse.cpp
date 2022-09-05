#include<iostream>
using namespace std;


int reverse(int arr[],int n)
{
    int low = 0;
    int high = n-1;
    while(low<high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8};
    cout<<"Before operation";
    for(int i=0; i<8; i++)
    {
        cout<<"\n"<<arr[i];
    }
    reverse(arr,8);
    cout<<"\n"<<"After operation";
    for(int i=0; i<8; i++)
    {
        cout<<"\n"<<arr[i];
    }
}