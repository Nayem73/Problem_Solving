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
vector<int> adj[10003];
void traverse(TreeNode* cur, int lvl) {
    if (!cur) return;
    adj[lvl].push_back(cur->val);
    
    traverse(cur->left, lvl+1);
    traverse(cur->right, lvl+1);
}
    
public:
    int maxLevelSum(TreeNode* root) {
        traverse(root, 0);
        multimap<int, int, greater<int>> ans;
        for (int i = 0; i < 10003; i++) {
            if (adj[i].empty()) continue;
            int sum = 0;
            for (int X: adj[i]) {
                sum += X;
            }
            ans.insert({sum, i});
        }
        pair<int,int> value = *(ans.begin());
        return value.second + 1;
    }
};