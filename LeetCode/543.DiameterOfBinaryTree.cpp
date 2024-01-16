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
int ans = 0;
int maxDepth(TreeNode* curNode) {
    if (!curNode) return 0;
    int leftDepth = maxDepth(curNode->left);
    int rightDepth = maxDepth(curNode->right);
    ans = max(ans, leftDepth + rightDepth + 1);
    return max(leftDepth, rightDepth) + 1;
}
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        int tmp = maxDepth(root);
        return ans-1;
    }
};