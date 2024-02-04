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
    int traverse(TreeNode* root, int depth) {
        if (root == NULL) return depth;
        int leftDepth = traverse(root->left, depth+1);
        int rightDepth = traverse(root->right, depth+1);
        
        if (root->val == 2) {
            cout << leftDepth<< ' '<< rightDepth << endl;
        }
        
        ans = ans && (abs(leftDepth - rightDepth) <= 1);
        return max(leftDepth, rightDepth);
        
    }
    
public:
    bool isBalanced(TreeNode* root) {
        int tmp = traverse(root, 0);
        return ans;
    }
};