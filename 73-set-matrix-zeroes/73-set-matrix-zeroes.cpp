class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M=matrix.size();
        int N=matrix[0].size();
        int row[M];
        int col[N];
         for(int i=0;i<M;i++)
        {
            row[i]=1;
         }
             
         for(int j=0;j<N;j++)
        {
             col[j]=1;
         }
        
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
                }
            }
        }
        
         for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(row[i]==0 || col[j]==0)
                {
                    matrix[i][j]=0;
                }
            }
         }
    }
};