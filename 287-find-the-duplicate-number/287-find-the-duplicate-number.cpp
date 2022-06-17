class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int flag=0;
       int ans=-1;
        sort(nums.begin(),nums.end());
       for(int i=1;i<nums.size();i++)
       {
           if((nums[i-1]^nums[i])==0)
             
           {
               ans=nums[i-1];
               break;
           }
       }
        return ans;
    }
};