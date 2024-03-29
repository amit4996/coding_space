//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());

            Solution ob = new Solution();
            System.out.println(ob.fillingBucket(N));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    static int fillingBucket(int N) {
        //   int sum=0;
        int mod=100000000;
        // if(N==1 || N==0 ) return 1;
        // sum+=(fillingBucket(N-1)%mod+fillingBucket(N-2)%mod)%mod;
        // return sum%mod;
        
        int dp[]=new int[N+1];
        dp[0]=1;
        dp[1]=1;
         for(int i=2;i<=N;i++)
        {
                dp[i]=(dp[i-1]%mod+dp[i-2]%mod)%mod;
        }
        return dp[N]%mod;
    }
};