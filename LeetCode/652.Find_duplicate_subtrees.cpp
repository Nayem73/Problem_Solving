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
    string traverse(TreeNode* cur, map<string, int>& mp, vector<TreeNode*>& out) {
        if (!cur) return "";
        string s = "("; // won't work because of null without initializing something to s
        //[0,0,0,0,null,null,0,null,null,null,0] and wrong ans is: [[0],[0,null,0]]
        s += traverse(cur->left, mp, out);
        s += to_string(cur->val);
        s += traverse(cur->right ,mp, out);
        s += ")"; //also won't work if I don't close it!!! bcz i think string er last e null theke jasse in some cases
        //[2,1,11,11,null,1] and wrong ans is: [[11,1]]
        if (mp[s] == 1) out.push_back(cur);
        mp[s]++;
        return s;
    }
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        map<string, int> mp;
        vector<TreeNode*> out;
        traverse(root, mp, out);
        return out;
    }
};