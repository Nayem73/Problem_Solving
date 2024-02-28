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
	if (curNode == NULL) return;
	inOrderTraverse(curNode->left);
	cout << curNode->val << " ";
	inOrderTraverse(curNode->right);
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

Node* BSTTransplant(Node* root, Node* curNode, Node* newNode) {
	if (curNode == root) {
		root = newNode;
		return root;
	} else if (curNode == curNode->par->left) {
		curNode->par->left = newNode;
		newNode->par = curNode->par;
	} else {
		curNode->par->right = newNode;
		newNode->par = curNode->par;
	}

	return root;
}

Node* BSTDelete(Node* root, Node* node) {
	if (node->left == NULL) {
		root = BSTTransplant(root, node, node->right);
	} else if (node->right == NULL) {
		root = BSTTransplant(root, node, node->left);
	} else {
		Node* curNode = node->right;
		Node* smallestNode = curNode;
		while (curNode != NULL) {
			smallestNode = curNode;
			curNode = curNode->left;
		}
		if (smallestNode->par != node) {
			root = BSTTransplant(root, smallestNode, smallestNode->right);
			smallestNode->right = node->right;
			// node->right->par = smallestNode->right;
		}
		root = BSTTransplant(root, node, smallestNode);
		smallestNode->left = node->left;
	}
	free(node);
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
	// vector<int> store {4,-2,1,1,3,1,1,19,9,9,8,3,5};
	vector<int> store{10,5,17,3,7,12,19,1,4,13};
	// vector<int> store {4,5,6,7,1,0};
	Node* root = NULL;

	for (int X: store) {
		Node* node = new Node(X);
		root = createBST(root, node);
	}

	inOrderTraverse(root);
	cout << endl;

	int needToFind = 1;
	if (BSTFind(root, needToFind)) {
		root = BSTDelete(root, needToFind);
		cout << needToFind->val << "deleted successfully Alhamdulillah\n";
	} else {
		cout << needToFind << "is not found\n";
	}

	// int valOfNodeToDelete = 10;
	// Node* node = findNode(root, valOfNodeToDelete);
	// if (node != NULL && node->val == valOfNodeToDelete) {
	// 	root = BSTDelete(root, node);
	// 	cout << "deleted!" << endl;
	// } else {
	// 	cout << "node with value "<< valOfNodeToDelete << " not found!\n";
	// }

	inOrderTraverse(root);

}