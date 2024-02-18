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

struct Node {
	int val;
	Node* left;
	Node* right;
	Node* par;
	Node(int X) : val(X), left(NULL), right(NULL), par(NULL) {}
};

void inorderTraverse(Node* curNode) {
	if (curNode == NULL) return;
	inorderTraverse(curNode->left);
	cout << curNode->val << " ";
	inorderTraverse(curNode->right);
}

Node* createBST(Node* root, Node* node) {
	if (root == NULL) {
		root = node;
		return root;
	}

	Node* curNode = root;
	Node* parNode = NULL;

	while (curNode != NULL) {
		parNode = curNode;
		if (node->val < curNode->val) {
			curNode = curNode->left;
		} else {
			curNode = curNode->right;
		}
	}

	if (node->val < parNode->val) {
		parNode->left = node;
		node->par = parNode;
	} else {
		parNode->right = node;
		node->par = parNode;
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
	vector<int> store{3,1,9,39,18,0,1,93,9};
	int n = store.size();

	Node* root = NULL;

	for (int X : store) {
		Node* node = new Node(X);
		root = createBST(root, node);
	}

	inorderTraverse(root);
}