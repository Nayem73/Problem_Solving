/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector<int> out;
    void traverse(Node* cur) {
        if (!cur) return;
        out.push_back(cur->val);
        for (int i = 0; i < cur->children.size(); i++) {
            traverse(cur->children[i]);
        }
    }
public:
    vector<int> preorder(Node* root) {
        traverse(root);
        return out;
    }
};