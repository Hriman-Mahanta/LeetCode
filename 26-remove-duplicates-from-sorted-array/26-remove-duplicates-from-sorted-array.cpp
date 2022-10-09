class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int no_of_dup = 0;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
                no_of_dup += 1;
            else
                nums[i-no_of_dup] = nums[i];
        
        }
        return nums.size() - no_of_dup;
    }
};