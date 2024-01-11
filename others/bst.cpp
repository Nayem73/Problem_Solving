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

struct TreeNode {
	int val;
	TreeNode* parent;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int X) : val(X), parent(NULL), left(NULL), right(NULL) {}
};

void traverse(TreeNode* curNode) {
	if (curNode == NULL) return;
	traverse(curNode->left);
	cout << curNode->val << ' ';
	traverse(curNode->right);
}

TreeNode* bst_insert(TreeNode *root, TreeNode *node) {
	if (root == NULL) {
		root = node;
		return root;
	}

	TreeNode* curNode = root;
	TreeNode* parentNode = NULL;

	while (curNode != NULL) {
		if (node->val < curNode->val) {
			parentNode = curNode;
			curNode = curNode->left;
		} else {
			parentNode = curNode;
			curNode = curNode->right;
		}
	}

	if (node->val < parentNode->val) {
		parentNode->left = node;
	} else {
		parentNode->right = node;
	}

	return root;
}

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
	int n; cin >> n;
	TreeNode *root = NULL; //if you don't initialize it with NULL, you'll get error.
					//If you don't create a new node with new keyword, then always put it's value as NULL

	for (int i = 0; i < n; i++) {
		int val; cin >> val;
		TreeNode *newNode = new TreeNode(val);
		root = bst_insert(root, newNode);
	}

	
	traverse(root);
}

/*
input:
10
10 5 17 19 3 7 12 4 1 13

output:
1 3 4 5 7 10 12 13 17 19 
Alhamdulillah
*/