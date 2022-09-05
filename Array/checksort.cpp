#include<iostream>
using namespace std;



bool checksort(int arr[],int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
        
    }
    return true;
}
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int arr1[10] = {2,5,23,6,34};
    bool a = checksort(arr,9);
    bool b = checksort(arr1,5);
    cout<<a<<"         "<<b<<endl;
}