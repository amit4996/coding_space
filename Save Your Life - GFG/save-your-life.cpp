//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
           int maxSum=INT_MIN;
           string ans="";
           string finalans="";
           int sum=0;
           map<char,int> mp;
           
           for(int i=0;i<n;i++)
           {
               mp[x[i]]=b[i];
           }
           
           for(int i=0;i<w.size();i++)
           {
               if(mp.find(w[i])!=mp.end())
               {
                   sum+=mp[w[i]];
               }
               else
               {
                   sum+=w[i];
               }
               ans+=w[i];
                if(sum>=maxSum)
               {
                   finalans=ans;
                   maxSum=sum;
               }
               if(sum<0)
               {
                   sum=0;
                   ans="";
               }
              
           }
           return finalans;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends