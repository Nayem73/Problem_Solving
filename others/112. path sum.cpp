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
    
bool traverse(TreeNode* node, int targetSum, int currentSum) {
    if (node == NULL) return false;
    currentSum += node->val;
    if (node->left == NULL && node->right == NULL) {
        return targetSum == currentSum;
    }
    
    return traverse(node->left, targetSum, currentSum) || 
        traverse(node->right, targetSum, currentSum);
}    
    
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return traverse(root, targetSum, 0);
    }
};