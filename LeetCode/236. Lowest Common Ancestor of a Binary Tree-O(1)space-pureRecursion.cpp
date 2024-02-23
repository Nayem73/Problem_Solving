/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    TreeNode* traverse(TreeNode* curNode, TreeNode* p, TreeNode* q) {
        if (curNode == NULL || curNode == p || curNode == q) return curNode;
        
        TreeNode* gotLeft = traverse(curNode->left, p, q);
        TreeNode* gotRight = traverse(curNode->right, p, q);
        
        if (gotLeft != NULL && gotRight != NULL) return curNode;
        if (gotLeft != NULL) return gotLeft;
        if (gotRight != NULL) return gotRight;
        return NULL;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return traverse(root, p, q);
    }
};