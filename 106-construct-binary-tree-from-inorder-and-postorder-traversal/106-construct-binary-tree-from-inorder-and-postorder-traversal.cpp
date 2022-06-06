/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* helper(vector<int>& inorder,int inStart,int inEnd, vector<int>& postorder,int postStart,int postEnd,map<int,int> &mp)
    {
        if(inStart>inEnd||postStart>postEnd) return NULL;
        TreeNode* root=new TreeNode(postorder[postEnd]);
        int index=mp[root->val];
        int numRow=index-inStart;
        root->left=helper(inorder,inStart,index-1,postorder,postStart,postStart+numRow-1,mp);
         root->right=helper(inorder,index+1,inEnd,postorder,postStart+numRow,postEnd-1,mp);
        return root;
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        TreeNode* root=helper(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
        return root;
    }
};