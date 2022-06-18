class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int,int> mp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     mp[nums[i]]++;
        // }
        // for(auto it:mp)
        // {
        //     if(it.second>nums.size()/2) return it.first;
        // }
        // return 0;
        int cnt=0;
        int ele=0;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt==0)ele=nums[i];
            if(ele==nums[i]) cnt++;
            else
                cnt--;
        }
        return ele;
    }
};