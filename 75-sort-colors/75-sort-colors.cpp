class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count0=0;
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) count0++;
            if(nums[i]==1) count1++;
            if(nums[i]==2) count2++;
        }
        int i=0;
        while(count0--)
        {
            nums[i++]=0;
        }
        while(count1--)
        {
            nums[i++]=1;
        }
        while(count2--)
        {
            nums[i++]=2;
        }
    }
};

        // Alternate()
        // int n=nums.size();
        // int low=0;
        // int mid=0;
        // int high=n-1;
        // while(mid<=high)
        // {
        //     if(nums[mid]==0)
        //     {
        //         swap(nums[mid],nums[low]);
        //         mid++;
        //         low++;
        //     }
        //     else if(nums[mid]==1)
        //     {
        //         mid++;
        //     }
        //     else if(nums[mid]==2)
        //     {
        //         swap(nums[mid],nums[high]);
        //         high--;
        //     }
        // }