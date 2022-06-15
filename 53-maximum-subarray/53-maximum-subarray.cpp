class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int sum=nums[0];
       int maxSum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(sum<0)
            {
                sum=0;
            }
            sum+=nums[i];
            maxSum=max(maxSum,sum);
            
        }
        return maxSum;
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