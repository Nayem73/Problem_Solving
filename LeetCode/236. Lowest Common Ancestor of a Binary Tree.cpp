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
    vector<TreeNode* > ancestors;
        
    bool dfs(TreeNode* curNode, TreeNode* targetNode) {
        if (curNode == NULL) return false;
        if (curNode == targetNode) {
            ancestors.push_back(curNode);
            return true;
        }
        
        bool isFoundTargetNode = dfs(curNode->left, targetNode);
        isFoundTargetNode = isFoundTargetNode || dfs(curNode->right, targetNode);
        
        if (isFoundTargetNode) ancestors.push_back(curNode);
        return isFoundTargetNode;
    }
    
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool tmp = dfs(root, p);
        
        set<TreeNode* > firstNodeAncestors;
        for (TreeNode* X : ancestors) {
            firstNodeAncestors.insert(X);
        }
        
        ancestors.clear();
        tmp = dfs(root, q);
        for (TreeNode* X: ancestors) {
            if (firstNodeAncestors.find(X) != firstNodeAncestors.end()) {
                return X;
            }
        }
        return root;
    }
};