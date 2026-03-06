//program to returnindex of two numbers that add upto the target
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>twoSum(vector<int> nums, int target) //function to find values 
    {
        int n = nums.size();//size of vector
        
        for(int i=0;i<n;i++)//picks the first element 
    {
        for(int j=i+1;j<n;j++)//picks the remaining elements one by one
    {
         
        if(nums[i]+nums[j]==target)//condition for target
        {
            return{i,j};
        }
       
    }
    }
    return {};//empty vector if no value is found
    }
        
     

    };
