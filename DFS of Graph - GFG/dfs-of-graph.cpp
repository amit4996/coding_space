// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfstraversal(int V,vector<int> adj[],vector<int> &dfs,vector<int> &vis,int node)
    {
       dfs.push_back(node);
       vis[node]=1;
       for(auto it:adj[node])
       {
           if(vis[it]==0)
           {
               dfstraversal(V,adj,dfs,vis,it);
           }
       }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> dfs;
        vector<int> vis(V,0);
        // for(int i=0;i<V;i++)
        // {
        //     if(vis[i]==0)
        //     {
                dfstraversal(V,adj,dfs,vis,0);
            // }
        // }
        return dfs;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends