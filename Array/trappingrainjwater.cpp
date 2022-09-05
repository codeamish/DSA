#include<bits/stdc++.h>
using namespace std;



   int trap(vector<int>& height) {
        int res = 0;
        int n = height.size();
        int lmax[n],rmax[n];
        lmax[0] = height[0];
        for(int i = 1;i<n;i++)
        {
            lmax[i] = max(height[i],lmax[i-1]);
        }
        rmax[n-1] = height[n-1];
        for(int  i = n-2;i>=0;i--)
        {
            rmax[i] = max(height[i],rmax[i+1]);
        }
        for(int i= 1;i<n;i++)
        {
            res = res+(min(rmax[i],lmax[i])-height[i]);
        }
        return(res);
    }  
int main()
{
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height);
}