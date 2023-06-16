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
vector<int> nodes;
void traverse(TreeNode* cur) {
    if (!cur) return;
    nodes.push_back(cur->val);
    traverse(cur->left);
    traverse(cur->right);
}    
public:
    int getMinimumDifference(TreeNode* root) {
        traverse(root);
        sort(nodes.begin(), nodes.end());
        
        int ans = 2e9;
        for (int i = 1; i < (int)nodes.size(); i++) {
            ans = min(ans, nodes[i]-nodes[i-1]);
        }
        return ans;
    }
};