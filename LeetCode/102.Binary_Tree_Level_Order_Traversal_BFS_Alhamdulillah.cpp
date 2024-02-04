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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<int> store[2003];
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        vector<vector<int>> out;
        if (root == NULL) return out;
        
        while (!q.empty()) {
            TreeNode* curNode = q.front().first;
            int curDepth = q.front().second;
            q.pop();
            store[curDepth].push_back(curNode->val);
            
            if (curNode->left != NULL) {
                q.push({curNode->left, curDepth+1});
            }
            if (curNode->right != NULL) {
                q.push({curNode->right, curDepth+1});
            }
        }
        
        for (int i = 0; i <= 2000; i++) {
            if (!store[i].size()) break;
            vector<int> tmp;
            for (int x : store[i]) {
                tmp.push_back(x);
            }
            out.push_back(tmp);
        }
        return out;
    }
};