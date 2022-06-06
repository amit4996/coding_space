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
        long long mx=INT_MIN;
        while(end<N)
        {
            sum+=Arr[end];
            if(end-start+1<K)
            {
                end++;
            }
            else if(end-start+1==K)
            {
                mx=max(mx,sum);
                sum-=Arr[start];
                start++;
                end++;
            }
        }
        return mx;
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