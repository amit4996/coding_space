class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int currsum=0;
        for(int i=0;i<nums.size();i++)
        {
            currsum+=nums[i];
            if(currsum>maxsum)
            {
                maxsum=currsum;
            }
            if(currsum<0)
            {
                currsum=0;
            }
        }
        return maxsum;
    }
};

//Alternate method(Naive)
//         for(int i=0;i<nums.size();i++)
//         {
//              int sum=0;
//             for(int j=i;j<nums.size();j++)
//             {
//                 sum+=nums[j];
//                 mx=max(mx,sum);
//             }        
//         }
//         return mx;