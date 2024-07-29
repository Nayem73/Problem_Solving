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
	Node(int x) : val(x), par(NULL), left(NULL), right(NULL) {}
};

void inorderTraversal(Node* curNode) {
	if (curNode == NULL) return;
	inorderTraversal(curNode->left);
	cout << curNode->val << " ";
	inorderTraversal(curNode->right);
}

Node* node_transplant(Node* root, Node* curNode, Node* newNode) {
	if (curNode == root) {
		root = newNode;
		return root;
	}
	if (curNode->par->left == curNode) {
		curNode->par->left = newNode;
		if (newNode != NULL) newNode->par = curNode->par;
	}
	else if (curNode->par->right == curNode) {
		curNode->par->right = newNode;
		newNode->par = curNode->par;
		if (newNode != NULL) newNode->par = curNode->par;
	}
	return root;
}

Node* deleteNode(Node* root, Node* node) {
	if (node->left == NULL) {
		root = node_transplant(root, node, node->right);
	} else if (node->right == NULL) {
		root = node_transplant(root, node, node->left);
	} else {
		Node* curNode = node->right;
		Node* smallestNode = curNode;

		while (curNode != NULL) {
			smallestNode = curNode;
			curNode = curNode->left;
		}
		if (smallestNode->par != node) {
			root = node_transplant(root, smallestNode, smallestNode->right);
			smallestNode->right = node->right;
		}
		root = node_transplant(root, node, smallestNode);
		smallestNode->left = node->left;
	}
	free(node);
	return root;
}

Node* create_bst(Node* root, Node* node) {
	if (root == NULL) {
		root = node;
		return root;
	}

	Node* curNode = root;
	Node* parNode = root;
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

Node* findNode(Node* root, int val) {
	Node* curNode = root;
	while (curNode != NULL) {
		if (val == curNode->val) return curNode;
		else if (val < curNode->val) curNode = curNode->left;
		else curNode = curNode->right;
	}
	return NULL;
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
	vector<int> nodes{5,2,1,9,3,2,7,22,88,4,0,-1,-8,-7,1,0};
	int n = nodes.size();

	Node* root = NULL;

	for (int i = 0; i < n; i++) {
		Node* node = new Node(nodes[i]);
		root = create_bst(root, node);
	}

	inorderTraversal(root);
	cout << endl;

	Node* gotNode = findNode(root, 5);
	cerr << "gotNode: "<< gotNode->val << endl;

	root = deleteNode(root, gotNode);
	inorderTraversal(root);

	cerr <<"final root is: "<< root->val << endl;
}