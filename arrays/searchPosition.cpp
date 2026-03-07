//Leetcode problem
//search insert position
//approach using linear search
//runtime- 0ms
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {  //if value = target,index is returned
           //if value > target,index of value is returned
            if(nums[i]>=target)
            {
                return i;
            }
            
            
        }
        
        return n;//if the target is the largest,size of array(last index) is printed
        
    }
};
