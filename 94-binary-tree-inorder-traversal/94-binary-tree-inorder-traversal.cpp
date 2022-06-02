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
    
    vector<int> inorderTraversal(TreeNode* node) {
       // if(!root) return v;
       //  inorderTraversal(root->left);
       //  v.push_back(root->val);
       //  inorderTraversal(root->right);
       //  return v;
         vector<int> v;
         stack<TreeNode*> s;
         while(true)
         {
             if(node!=NULL)
             {
                 s.push(node);
                 node=node->left;
             }
             else
             {
                 if(s.empty()) break;
                 node=s.top();
                 v.push_back(node->val);
                 s.pop();
                 node=node->right;
             }
         }
        return v;
    }
};