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
    vector<int> rightSideView(TreeNode* root) {
        if (root == NULL) return {};
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        vector<bool> isLevelDone(101);
        vector<int> ans;
        //my mistake was: I should've known - ekta lvl e just ekta node e dekha possible.
        while (!q.empty()) {
            TreeNode* curNode = q.front().first;
            int curLevel = q.front().second;
            q.pop();
            if (!isLevelDone[curLevel]) {
                ans.push_back(curNode->val);
            }
            
            isLevelDone[curLevel] = true;
            if (curNode->right != NULL) {
                q.push({curNode->right, curLevel+1});
            } 
            if (curNode->left != NULL) {
                q.push({curNode->left, curLevel+1});
            }
        }
        
        return ans;
    }
};