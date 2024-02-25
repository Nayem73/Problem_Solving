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
    //vector<int> store[3001];
    TreeNode* root = NULL;
    
    void traverse(vector<int> &preorder, vector<int> operation, TreeNode* par, string fromWhere) {
        map<int,int> mp;
        for (int X : operation) {
            mp[X]++;
        }
        
        TreeNode* curRoot = NULL;
        for (int X : preorder) {
            if (mp.find(X) != mp.end()) {
                curRoot = new TreeNode(X);
                break;
            }
        }
        
        if (par == NULL) root = curRoot;
        else if (fromWhere == "fromLeft") par->left = curRoot;
        else par->right = curRoot;
        if ((int)operation.size() == 1) return;
        
        
        vector<int> leftOperation, rightOperation;
        
        int nxtIndx = 0;
        for (int i = 0; i < (int)operation.size(); i++) {
            nxtIndx = i+1;
            if (operation[i] == curRoot->val) break;
            leftOperation.push_back(operation[i]);
        }
        
        for (int i = nxtIndx; i < (int)operation.size(); i++) {
            rightOperation.push_back(operation[i]);
        }
        
        if (!leftOperation.empty()) traverse(preorder, leftOperation, curRoot, "fromLeft");
        if (!rightOperation.empty()) traverse(preorder, rightOperation, curRoot, "fromRight");
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        traverse(preorder, inorder, NULL, "");
        // for (int i = 0; i < 100; i++) {
        //     if (!store[i].size()) break;
        //     for (int X: store[i]) {
        //         cout << X << ' ';
        //     }
        //     cout << endl;
        // }
        return root;
    }
};