// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // int cycledetectbfs(int i,int V,vector<int> adj[],vector<int> &vis)
    // {
    //     queue<pair<int,int>> q;
    //     q.push({i,-1});
    //     vis[i]=1;
    //     while(!q.empty())
    //     {
    //         int node=q.front().first;
    //         int parent=q.front().second;
    //         q.pop();
    //         for(auto it:adj[node])
    //         {
    //             if(vis[it]==0)
    //             {
    //                 vis[it]=1;
    //                 q.push({it,node});
    //             }
    //             else
    //             {
    //                 if(parent!=it) return true;
    //             }
    //         }
    //     }
    //     return false;
    // }
    
    // bool isCycle(int V, vector<int> adj[]) {
    //   vector<int> vis(V,0);
    //   for(int i=0;i<V;i++)
    //   {
    //       if(!vis[i])
    //       {
    //           if(cycledetectbfs(i,V,adj,vis)) return true;
    //       }
    //   }
    //   return false;
    // }
    
    bool cycledetectdfs(int node,int parent ,vector<int> adj[],vector<int> &vis)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            {
                if(cycledetectdfs(it,node,adj,vis)) return true;
            }
            else
            {
              if(it!=parent) return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
      vector<int> vis(V,0);
      for(int i=0;i<V;i++)
      {
          if(vis[i]==0)
          {
              if(cycledetectdfs(i,-1,adj,vis)) return true;
          }
      }
      return false;
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends