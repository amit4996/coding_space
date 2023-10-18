//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
     void dfs(int row,int col,vector<vector<char>>& grid,vector<vector<int>> &vis)
    {
        vis[row][col]=1;
        int rowLength=grid.size();
        int colLength=grid[0].size();
        if(row-1>=0)
        {
           if(vis[row-1][col]==0 && grid[row-1][col]!='0')
           dfs(row-1,col,grid,vis);
        }

        if(col-1>=0)
        {
          if(vis[row][col-1]==0 && grid[row][col-1]!='0')
          dfs(row,col-1,grid,vis);
        }

        if(row+1<rowLength)
        {
          if(vis[row+1][col]==0 && grid[row+1][col]!='0')
          dfs(row+1,col,grid,vis);
        }

        if(col+1<colLength)
        {
          if(vis[row][col+1]==0 && grid[row][col+1]!='0')
          dfs(row,col+1,grid,vis);
        }
        
        if(row-1>=0 && col-1>=0)
        {
           if(vis[row-1][col-1]==0 && grid[row-1][col-1]!='0')
           dfs(row-1,col-1,grid,vis);
        }
        
        if(row+1<rowLength && col+1<colLength)
        {
           if(vis[row+1][col+1]==0 && grid[row+1][col+1]!='0')
           dfs(row+1,col+1,grid,vis);
        }
        
        if(row-1>=0 && col+1<colLength)
        {
           if(vis[row-1][col+1]==0 && grid[row-1][col+1]!='0')
           dfs(row-1,col+1,grid,vis);
        }
        
        if(row+1<rowLength && col-1>=0)
        {
           if(vis[row+1][col-1]==0 && grid[row+1][col-1]!='0')
           dfs(row+1,col-1,grid,vis);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j]!='0')
                {
                    dfs(i,j,grid,vis);
                    count++;
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends