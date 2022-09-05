#include<iostream>
#include<vector>
using namespace std;

int beautifulTriplets(int d, vector<int> arr) {
    int count = 0;
    for(int i = 0;i<arr.size();i++)
    {
        for(int j = i+1;j<arr.size();j++)
        {
            for(int k = i+2;k<arr.size();k++)
            {
                
                if(arr[j]-arr[i]==d && arr[k]-arr[j]==d && i<j<k)
                {
                    count++;
                }    
            }
        }
    }
    return(count);
}
int main()
{
    int d = 3;
    vector<int> arr = {1, 2 ,4 ,5, 7, 8, 10};
    int k = beautifulTriplets(d,arr);
    cout<<k;
}