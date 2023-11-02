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
    int ans = 0;
    pair<int,int> traverse(TreeNode* Node) {
        pair<int,int> subtree1;
        pair<int,int> subtree2;
        int notLeaf = 1;
        
        if (Node->left != NULL) {
            subtree1 = traverse(Node->left);
            //return subtree1;
        }
        
        if (Node->right != NULL) {
            subtree2 = traverse(Node->right);
        }
        
        int totalVal = subtree1.first + subtree2.first + Node->val;
        int totalNodes = subtree1.second + subtree2.second + 1;
        
        if (totalVal/totalNodes == Node->val) ans++;
        
        cout << Node->val << endl;
        
        return {totalVal, totalNodes};
    }
public:
    int averageOfSubtree(TreeNode* root) {
        pair<int,int> tmp = traverse(root);
        return ans;
    }
};