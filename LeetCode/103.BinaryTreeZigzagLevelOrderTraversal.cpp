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
    vector<int> lvl[2003];
    void traverse(TreeNode* root, int curlvl) {
        if (!root) return;
        cout << root->val << ' ';
        lvl[curlvl].push_back(root->val);
        traverse(root->left, curlvl+1);
        traverse(root->right, curlvl+1);
    }

public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        traverse(root, 0);
        vector<vector<int>> ans;
        int curlvl = 0;

        for (auto X: lvl) {
            if (X.empty()) break;
            vector<int> tmp;
            for (auto Y: X) {
                tmp.push_back(Y);
            }
            if (curlvl%2) {
                reverse(tmp.begin(), tmp.end());
            }
            ans.push_back(tmp);
            curlvl++;
        }
        return ans;
    }
};