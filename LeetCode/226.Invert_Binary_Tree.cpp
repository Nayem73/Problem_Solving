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
    
    /*TreeNode* fnc(TreeNode* cur) {
        if (!cur) return cur;
        cur->right = fnc(cur->left);
        cur->left = fnc(cur->right);
        return cur;
    }
    */
    TreeNode* invertTree(TreeNode* cur) {
        //TreeNode *L = root->left;
        //TreeNode *R = root->right;
        
        //return root;
        //root->left = R;
        //root->right = L;
        
        //return fnc(root);
        //TreeNode cur = root;
        if (!cur) return cur;
        cout << cur->val<< endl;
       // /*cur->right = */ invertTree(cur->left);
        ///*cur->right = */ invertTree(cur->left);
        TreeNode* tmpRight = cur->right;
        cur->right = invertTree(cur->left);
        cur->left = invertTree(tmpRight);
        return cur;
        
    }
};