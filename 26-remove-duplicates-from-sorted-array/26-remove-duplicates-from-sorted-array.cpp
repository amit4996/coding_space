class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int prev=0;
        int curr=0;
        int n=nums.size();
        if(n<2)
        {
            return n;
        }    
        while(curr<n)
        {
            if(nums[prev]==nums[curr])
            {
                curr++;
            }
            else
            {
                prev++;
                swap(nums[prev],nums[curr]);
                curr++;
            }
        }
        return prev+1;
    }
};