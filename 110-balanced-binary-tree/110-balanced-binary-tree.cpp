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
    bool flag=true;
    int height(TreeNode* root)
    {
        if(!root) return 0;
        int l=height(root->left);
        int r=height(root->right);
        if(abs(l-r)>1) flag=false;
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return flag;
    }
};