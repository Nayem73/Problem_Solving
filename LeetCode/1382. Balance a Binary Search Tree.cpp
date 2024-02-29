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
    void getInorderTraversal(TreeNode* curNode, vector<TreeNode*>& inorder) {
        if (curNode == NULL) return;
        getInorderTraversal(curNode->left, inorder);
        inorder.push_back(curNode);
        getInorderTraversal(curNode->right, inorder);
    }
    
    TreeNode* makeBalancedTree(vector<TreeNode*>& inorder, int lo, int hi) {
        if (lo > hi) return NULL;
        int mid = (lo+hi)/2;
        TreeNode* curRoot = inorder[mid];
        TreeNode* leftSubtree = makeBalancedTree(inorder, lo, mid-1);
        TreeNode* rightSubtree = makeBalancedTree(inorder, mid+1, hi);
        
        curRoot->left = leftSubtree;
        curRoot->right = rightSubtree;
        return curRoot;
    }
    
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> inorder;
        getInorderTraversal(root, inorder);
        int n = inorder.size();
        
        root = makeBalancedTree(inorder, 0, n-1);
        return root;
    }
};