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
		node->par = parentNode; //forgot to add this that's why node was not getting deleted when i was 
						//doing operations like node->par = something.
	} else {
		parentNode->right = node;
		node->par = parentNode;
	}
	return root;
}

Node* findNode(Node* root, int val) {
	Node* curNode = root;
	while (curNode != NULL) {
		if (val == curNode->val) {
			return curNode;
		}
		if (val < curNode->val) {
			curNode = curNode->left;
		} else {
			curNode = curNode->right;
		}
	}
	return root;
}

Node* BSTNodeTransplant(Node* root, Node* curNode, Node* newNode) {
	if (curNode == root) {
		root = newNode;
		return root;
	} else if (curNode == curNode->par->left) {
		curNode->par->left = newNode;
	} else {
	cerr << "curNode->par->right = " << curNode->par->right << endl;
		curNode->par->right = newNode;
	}
	return root;
}

Node* deleteNode(Node* root, Node* node) {
	if (node->left == NULL) {
		root = BSTNodeTransplant(root, node, node->right);
	} else if (node->right == NULL) {
		root = BSTNodeTransplant(root, node, node->left);
	} else {
		Node* minNode = node->right;
		while (minNode->left != NULL) {
			minNode = minNode->left;
		}

		if (minNode->par != node) {
		cerr << minNode->val << endl;
		cerr << minNode->right->val << endl;
			root = BSTNodeTransplant(root, minNode, minNode->right);
			minNode->right = node->right;
		}

		root = BSTNodeTransplant(root, node, minNode);
		minNode->left = node->left;
	}
	free(node);
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

	vector<int> inputNodes{10,5,17,3,7,12,19,1,4,13};
	int n = inputNodes.size();

	for (int i = 0; i < n; i++) {
		Node* newNode = new Node(inputNodes[i]);
		root = createBST(root, newNode);
	}

	inorderTraverse(root);
	cout<<endl;

	int valOfNodeToDelete = 10;
	Node* node = findNode(root, valOfNodeToDelete);
	if (node != NULL && node->val == valOfNodeToDelete) {
		root = deleteNode(root, node);
		cout << "deleted!" << endl;
		inorderTraverse(root);
	} else {
		cout << "node with value "<< valOfNodeToDelete << " not found!\n";
	}
}