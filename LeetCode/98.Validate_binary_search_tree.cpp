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
    bool isValidBST(TreeNode* root) {
        if (!root) return true;

        bool one = false, two = false;
        if (!root->left) one = true;
        else if (root->left->val < root->val) one = true;
        
        if (!root->right) two = true;
        else if (root->right->val > root->val) two = true;
        
        if (one && two) {
            bool got1 = isValidBST(root->left);
            bool got2 = isValidBST(root->right);
            return got1 && got2;
        }
        return false;
    }
};
//[5,4,6,null,null,3,8] this case fails. I know why Alhamdulillah.