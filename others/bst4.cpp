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

void inOrderTraverse(Node* curNode) {
	// cout << "inOrderTraverse: ";
	if (curNode == NULL) return;
	inOrderTraverse(curNode->left);
	cout << curNode->val << " ";
	inOrderTraverse(curNode->right);
}

Node* bst(Node* root, Node* node) {
	if (root == NULL) {
		root = node;
		return root;
	}

	Node* curNode = root;
	Node* parNode = NULL;

	while (curNode != NULL) {
		parNode = curNode;
		if (curNode->val > node->val) {
			curNode = curNode->left;
		} else {
			curNode = curNode->right;
		}
	}

	if (parNode->val > node->val) {
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
	vector<int> store{4,5,1,10,11,9,0,3,2};
	int n = store.size();

	Node* root = NULL;

	for (int i = 0; i < n; i++) {
		Node* node = new Node(store[i]);
		root = bst(root, node);
	}

	inOrderTraverse(root);
}