// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    long long maximumSumSubarray(int K, vector<int> &Arr , int N){
        if(K>N) return 0;
        int start=0;
        int end=0;
        long long sum=0;
        
        while(end-start+1!=K)
        {
            sum+=Arr[end];
            end++;
        }
        long long maxSum=sum;
        while(end<N)
        {
            sum=sum-Arr[start-1]+Arr[end];
            maxSum=max(maxSum,sum);
            start++;
            end++;
        }
        return maxSum;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}   // } Driver Code Ends