#include<bits/stdc++.h>
using namespace std;


int jump(vector<int>& nums)
{
    int n = nums.size()-1;
   
    int res = 0;
    int i = 0;
    while(i<nums.size())
    {
        if(i+nums[i]>=n)
        {
            res++;
            break;
           
        }
        else if(i)
        else
        {
            res++;
            i+=nums[i];
        }
    }
     return(res);
}
int main()
{
    vector<int> nums =  {1,2,1,1,1};
    cout<<jump(nums)<<endl;
}