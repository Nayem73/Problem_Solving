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
    vector<int> order;
    void traverse(TreeNode* cur) {
        if (!cur) return;
        
        traverse(cur->left);
        order.push_back(cur->val);
        traverse(cur->right);
    }
    
public:
    vector<int> inorderTraversal(TreeNode* root) {
        traverse(root);
        return order;
    }
};