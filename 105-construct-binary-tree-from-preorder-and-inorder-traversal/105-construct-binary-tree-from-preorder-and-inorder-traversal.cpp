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
    TreeNode* helper(vector<int> &preorder,int preStart,int preEnd,vector<int> &inorder,int inStart,int inEnd,map<int,int> &mp)
    {
        if(preStart>preEnd||inStart>inEnd) return NULL;
         TreeNode* root=new TreeNode(preorder[preStart]);
         int index=mp[root->val];
         int numsLeft=index-inStart;
         root->left=helper(preorder,preStart+1,preStart+numsLeft,inorder,inStart,index-1,mp);
        root->right=helper(preorder,preStart+numsLeft+1,preEnd,inorder,index+1,inEnd,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        TreeNode* root=helper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
};