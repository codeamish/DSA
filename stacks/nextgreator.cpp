#include<bits/stdc++.h>
using namespace std;


void printgreatest(int arr[],int n)
{
    stack<int> s;
    s.push(arr[n-1]);
    cout<<-1<<" ";
    for(int i  = n-2;i>=0; i--)
    {
        while(s.empty()==false&&s.top()<=arr[i])
        {
            s.pop();
        }
        int next_gen = s.empty()?-1:s.top();
        cout<<next_gen<<" ";
        s.push(arr[i]);
    }
}
int main()
{
    int arr[8] = {5,15,10,8,6,12,9,18};
    printgreatest(arr,8);
}
// Time complexity is big O of n  and auxiliary space required is also big O of n.