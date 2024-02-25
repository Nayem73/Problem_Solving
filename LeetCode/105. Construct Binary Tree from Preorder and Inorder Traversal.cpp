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
    vector<int> store[3001];
    void traverse(vector<int> &preorder, vector<int> operation, int lvl) {
        map<int,int> mp;
        for (int X : operation) {
            mp[X]++;
        }
        
        int root = preorder[0];
        for (int X : preorder) {
            if (mp.find(X) != mp.end()) {
                root = X;
                break;
            }
        }
        
        store[lvl].push_back(root);
        if ((int)operation.size() == 1) return;
        
        vector<int> leftOperation, rightOperation;
        
        int nxtIndx = 0;
        for (int i = 0; i < (int)operation.size(); i++) {
            nxtIndx = i+1;
            if (operation[i] == root) break;
            leftOperation.push_back(operation[i]);
        }
        
        for (int i = nxtIndx; i < (int)operation.size(); i++) {
            rightOperation.push_back(operation[i]);
        }
        
        traverse(preorder, leftOperation, lvl+1);
        traverse(preorder, rightOperation, lvl+1);
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        traverse(preorder, inorder, 0);
        for (int i = 0; i < 100; i++) {
            if (!store[i].size()) break;
            for (int X: store[i]) {
                cout << X << ' ';
            }
            cout << endl;
        }
        TreeNode* root = NULL;
        return root;
    }
};