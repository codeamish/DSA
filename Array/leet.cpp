#include<iostream>
#include<vector>


using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
       int i = 0;
       int j = i+1;
      
       for(i; i < nums.size();i++) {
           int sum = 0;
           for(int j = i+1; j < nums.size();j++)
           {
               sum = nums[i]+nums[j];
               if(sum==target)
               {
                   goto A;
               }
               else
               {
                   sum = 0;
               }
           } 
       }
       A:

        vector<int> res;
       res.push_back(i);
       res.push_back(j);
       return(res);
    }
int main()
{
    vector<int> arr = {3,2,3};
    vector<int> res = twoSum(arr,6);
    for(int i=0;i<res.size();i++)
    {
        cout<<"\n"<<res[i]<<endl;
    }
}
