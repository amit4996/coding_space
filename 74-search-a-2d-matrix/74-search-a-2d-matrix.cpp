class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int numrow=0;
      int numcol=matrix[0].size()-1;
      while(numrow<matrix.size() && numcol>=0)
      {
          if(target==matrix[numrow][numcol])
          {
              return true;
          }
          else if(target>matrix[numrow][numcol])
          {
              numrow++;
          }
          else
          {
              numcol--;
          }
      }
        return false;
    }
};