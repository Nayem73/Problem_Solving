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
	Node* par;
	Node* left;
	Node* right;

	Node(int X) : val(X), par(NULL), left(NULL), right(NULL) {}
};

void inorderTraverse(Node* curNode) {
	if (curNode == NULL) return;
	inorderTraverse(curNode->left);
	cout<<curNode->val << ' ';
	inorderTraverse(curNode->right);
}

Node* createBST(Node* root, Node* node) {
	if (root == NULL) {
		root = node;
		return root;
	}

	Node* parentNode = NULL;
	Node* curNode = root;

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
	Node* root = NULL;

	vector<int> inputNodes{10,17,5,7,19,12,3,13,4,1};
	int n = inputNodes.size();

	for (int i = 0; i < n; i++) {
		Node* newNode = new Node(inputNodes[i]);
		root = createBST(root, newNode);
	}

	inorderTraverse(root);
}