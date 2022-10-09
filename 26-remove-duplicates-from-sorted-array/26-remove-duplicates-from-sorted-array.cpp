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
        // if(n==2 && nums[0]==nums[1])
        // {
        //     return curr;
        // }
        // if(n==2 && nums[0]!=nums[1])
        // {
        //     return curr+1;
        // }
        
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