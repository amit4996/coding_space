class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1) return {{1}};
        vector<vector<int>> v=generate(numRows-1);
        int n=v.size();
        vector<int> v1;
        v1.push_back(1);
        for(int i=1;i<v[v.size()-1].size();i++)
        {
            v1.push_back(v[v.size()-1][i-1]+v[v.size()-1][i]);
        }
        v1.push_back(1);
        v.push_back(v1);
        return v;
    }
};