class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
           if(nums2.size()==0) return;
           for(int i=m;i<n+m;i++)
           {
               nums1[i]=nums2[i-m];
           }
          sort(nums1.begin(),nums1.end());
//         int p1=0;
//         int p2=0;
//         while(p1<m && p2<n)
//         {
//             if(nums1[p1]>nums2[p2])
//         {
//             swap(nums1[p1],nums2[p2]);
//             sort(nums2.begin(),nums2.end());
//         }
//         else
//         {
//             p1++;
//         }
//         }
        
//         int i=0;
//         while(i<n)
//         {
//             nums1[p1++]=nums2[i++];
//         }
       
    }
};