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
	Node* next;
};

Node* create_node(int val) {
	Node* new_node = new Node();
	new_node->val = val;
	new_node->next = NULL;
	return new_node;
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
	Node *n1, *n2, *head, *n3;

	head = create_node(10);
	n1 = create_node(20);
	n2 = create_node(30);
	n3 = create_node(40);

	head->next = n1;
	n1->next = n2;
	n2->next = n3;

	Node* curNode = head;
	Node* prevNode = NULL;
	
	while (curNode != NULL) {
		Node* tmpNode = curNode->next;
		if (tmpNode == NULL) head = curNode;

		curNode->next = prevNode;
		prevNode = curNode;
		curNode = tmpNode;
	}

	curNode = head;
	// return 0;
	while (curNode != NULL) {
		cout << curNode->val << ' ';
		curNode = curNode->next;
	}


}

// 10->20->30->40

