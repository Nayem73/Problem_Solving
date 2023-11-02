//BISMILLAHIR-RAHMANIR-RAHIM//
#include <bits/stdc++.h>
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > rje & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, rje&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct rje {
#ifdef LOCALM
~rje() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define rji(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
#define fast_io {ios_base::sync_with_stdio(0); cin.tie(0);}
#define endl '\n'

int main() {
//ALHAMDULILLAHI-RABBIL-ALAMIN//
#ifdef LOCALM
freopen("in1", "r", stdin);
freopen("out1", "w", stdout);
#endif
fast_io;
//-------------------------------	
	//SUBHANALLAH//
//-------------------------------
	//pair<int, int> p;
	//rje()<<rji(p);
}

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
        } else {
            subtree1 = {Node->val, 1};  
        }
        
        if (Node->right != NULL) {
            subtree2 = traverse(Node->right);
        } else {
            subtree2 = {Node->val, 1};
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