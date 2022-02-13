class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> rowtrack(row,0);
         vector<int> coltrack(col,0);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0) 
                {
                    rowtrack[i]=-1;
                    coltrack[j]=-1;
                }
                
            }
            
        }
        

        
        
        for(int i=0;i<row;i++)
            {
            for(int j=0;j<col;j++)
            {
                if(rowtrack[i]==-1 ||coltrack[j]==-1)
                    matrix[i][j]=0;
            }
            }
    }
};