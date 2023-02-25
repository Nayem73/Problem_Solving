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
    vector<int> nodes_in_level[2003];
    void traverse(TreeNode* cur, int curlvl) {
        if (!cur) return;
        nodes_in_level[curlvl].push_back(cur->val);
        traverse(cur->left, curlvl+1);
        traverse(cur->right, curlvl+1);
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        traverse(root, 0);
        vector<vector<int>> out;
        for (auto X: nodes_in_level) {
            if (X.empty()) break;
            out.push_back(X);
        }
        return out;
    }
};