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
       vector<int> v;
    vector<int> preorderTraversal(TreeNode* root) {
      // if(!root) return v;
      //   v.push_back(root->val);
      //   preorderTraversal(root->left);
      //   preorderTraversal(root->right); 
      //   return v;
        stack<TreeNode*> s;
        if(!root) return v;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* temp=s.top();
            v.push_back(temp->val);
            s.pop();
            if(temp->right) s.push(temp->right);
            if(temp->left) s.push(temp->left);
        }
        return v;
    }
};