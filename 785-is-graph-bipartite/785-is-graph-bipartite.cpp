class Solution {
public:
    // bool isbfsbipartite(int i,vector<vector<int>>& graph,vector<int> &color)
    // {
    //         queue<int> q;
    //         q.push(i);
    //         color[i]=1;
    //         while(!q.empty())
    //         {
    //             int node=q.front();
    //             q.pop();
    //             for(auto it:graph[node])
    //             {
    //                 if(color[it]==-1)
    //                 {
    //                     q.push(it);
    //                     color[it]=1-color[node];
    //                 }
    //                 else if(color[it]==color[node]) return false;     
    //             }
    //         }
    //     return true;
    // }
    bool isdfspartite(int i,vector<vector<int>> &graph,vector<int> & color)
    {
        if(color[i]==-1) color[i]=1;
        for(auto it:graph[i])
        {
            if(color[it]==-1)
            {
                color[it]=1-color[i];
               if(!isdfspartite(it,graph,color)) return false;
            }
            else
            {
                if(color[it]==color[i]) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int> color(V,-1);
        for(int i=0;i<V;i++)
        {
            if(color[i]==-1)
            {
                if(isdfspartite(i,graph,color)==false) return false;
            }
        }
        return true;
    }
};