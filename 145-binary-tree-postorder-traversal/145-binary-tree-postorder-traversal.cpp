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
    // RECURSIVE
    // vector<int> v;
    // vector<int> postorderTraversal(TreeNode* root) {
    //     if(!root) return v;
    //     postorderTraversal(root->left);
    //     postorderTraversal(root->right);
    //     v.push_back(root->val);
    //     return v;
    // }
    
    //ITERATIVE
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        vector<int> v;
        if(!root) return v;
        s1.push(root);
        while(!s1.empty())
        {
            TreeNode* temp=s1.top();
            s1.pop();
            s2.push(temp);
            if(temp->left) s1.push(temp->left);
            if(temp->right) s1.push(temp->right);
        }
        while(!s2.empty())
        {
            v.push_back(s2.top()->val);
            s2.pop();
        }
        return v;
    }
    
};