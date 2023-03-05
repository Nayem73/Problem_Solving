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
    map<long long, long long> mp;
    void traverse(TreeNode* cur, int lvl) {
        if (!cur) return;
        mp[lvl] += (long long) cur->val;
        traverse(cur->left, lvl+1);
        traverse(cur->right, lvl+1);
    }
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        traverse(root, 0);
        vector<long long> level_sum;
        for (auto X: mp) level_sum.push_back(X.second);
        sort(level_sum.rbegin(), level_sum.rend());
        int n = level_sum.size();
        if (k > n) return -1;
        return level_sum[k-1];
    }
};