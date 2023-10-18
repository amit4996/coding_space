//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,int newColor,int initialColor)
    {
        ans[row][col]=newColor;
        
        int rowSize=image.size();
        int colSize=image[0].size();
        
        if(row-1>=0)
        {
           if(ans[row-1][col]!=newColor && image[row-1][col]==initialColor)
           dfs(row-1,col,ans,image,newColor,initialColor);
        }
        
        if(col-1>=0)
        {
            if(ans[row][col-1]!=newColor && image[row][col-1]==initialColor) 
            dfs(row,col-1,ans,image,newColor,initialColor);
        }
        
        if(row+1<rowSize)
        {
            if(ans[row+1][col]!=newColor && image[row+1][col]==initialColor) 
            dfs(row+1,col,ans,image,newColor,initialColor);
        }
        if(col+1<colSize)
        {
            if(ans[row][col+1]!=newColor && image[row][col+1]==initialColor) 
            dfs(row,col+1,ans,image,newColor,initialColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int initialColor=image[sr][sc];
        vector<vector<int>> ans=image;
        
        dfs(sr,sc,ans,image,newColor,initialColor);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends