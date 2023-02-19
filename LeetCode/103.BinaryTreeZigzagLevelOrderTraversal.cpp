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
    map<int,int> mp;
    vector<int> store;
    void zigzagTraverse(TreeNode* root, int lvl) {
        if (!root) return;
        mp[lvl]++;
        cout << root->val << ' ';
        store.push_back(root->val);
        zigzagTraverse(root->left, lvl+1);
        zigzagTraverse(root->right, lvl+1);
    }

public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> x;
        zigzagTraverse(root, 0);
        
       // for (auto X: mp) cout << X.first << ' '<< X.second << endl;
        cout << endl;
        for (int X: store) cout << X << ' ';
        cout << endl;
        int cnt = 0;
        int mp_sz = mp.size();
        int n = store.size();
        vector<vector<int>> ans;
        for (int i = 0, ii = 0; i < n; i++, ii++) {
            int upto = mp[ii];
            vector<int> tmp;
            for (int j = i; j < i+upto; j++) {
                tmp.push_back(store[j]);
            }
            if (ii%2) reverse(tmp.begin(), tmp.end());
            ans.push_back(tmp);
            cout << i << ' '<< i+upto<<":" << endl;
            for (int X: tmp) cout<<"~" << X << ' ';
            cout << endl;
            i = i+upto-1;
            //cout << i << endl;
        }
        
        return ans;
    }
};