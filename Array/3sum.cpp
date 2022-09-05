#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int> nums)
{
    int n =  nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for(int i = 0; i < nums.size();i++)
    {
        int start = i+1;
        int end = n,sum;
        while(start < end)
        {
            sum = nums[i]+nums[start]+nums[end];
            if(sum>0)
            {
                end--;
            }
            if(sum<0)
            {
                start++;
            }
            else
            {
                res.push_back(vector<int>{nums[i], nums[start], nums[end]});
                start++;
                while(nums[start] == nums[start-1]&&start<end)
                {
                    start++;
                }
            }
        }
    }   
        return(res);

}

int main()
{
    vector<int> arr = {-1,0,1,2,-1,-4};
}