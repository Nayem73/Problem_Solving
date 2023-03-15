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
    vector<int> store[1003];
    void traverse(TreeNode* cur, int lvl) {
        if (!cur) {
            store[lvl].push_back(-1);
            return;
        }
        store[lvl].push_back(cur->val);
        traverse(cur->left, lvl+1);
        traverse(cur->right, lvl+1);
    }
    
public:
    bool isCompleteTree(TreeNode* root) {
        traverse(root, 0);   
        for (int i = 0; i <= 1000; i++) {
            if (store[i].empty()) continue;
            //cout << i << ": ";
            //for (int X: store[i]) cout << X << ' ';
            int n = store[i].size();
            bool nai = false;
            for (int j = 0; j < n; j++) {
                if (nai && store[i][j] != -1) return false;
                if (store[i][j] == -1) nai = true;
            }
            //cout << endl;
        }

        return true;
    }
};