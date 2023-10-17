//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(int node,int vis[],vector<vector<int>> &adj)
    {
        vis[node]=1;
        
        for(int i=0;i<adj[node].size();i++)
        {
            if(!vis[i] && adj[node][i]==1)
            {
                dfs(i,vis,adj);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        int vis[V]={0};
        int numofProvinces=0;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,adj);
                numofProvinces++;
            }
        }
        
        return numofProvinces;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends