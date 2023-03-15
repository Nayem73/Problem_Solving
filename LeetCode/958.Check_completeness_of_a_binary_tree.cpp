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
    bool ans = true;
    void traverse(TreeNode* cur) {
        if (!cur) return;
        if (!cur->left && cur->right) ans = false;
        traverse(cur->left);
        traverse(cur->right);
    }
    
public:
    bool isCompleteTree(TreeNode* root) {
        traverse(root);   
        return ans;
    }
};