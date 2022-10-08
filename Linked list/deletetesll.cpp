#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    vector<int> arr;
    if(n<=2&&n>20)
    {
        cout<<"Invalid list size";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        int temp = 0;
        cin>>temp;
        arr.push_back(temp);
    }
    int ele;
    cin>>ele;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            count++;
        }
    }
    if(count<=1)
    {
        cout<<"Deletion not possible";
        return 0;
    }
    else
    {
        int i; 
        for(int i=n-1;i>=0;i--)
        {
            
            if(arr[i]!=ele)
            {    
                cout<<arr[i]<<endl;
            }
            
        }
       
    }
    return 0;
}
