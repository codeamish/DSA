#include<iostream>
using namespace std;

int insert(int arr[],int n,int x,int cap,int pos)
{   
    if(n==cap)
    {
        cout<<"Array is full!"<<endl;
    }
    int idx = pos-1;
    for(int i=n-1;i>=idx;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[idx] = x;
    return n+1;
}



int main()
{
    int arr[10] = {5,3,7,10,20,8};
    cout<<"Before insertion\n";
    for(int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    int n = insert(arr,6,32,7,2);
    cout<<"After insertion\n";
    
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}