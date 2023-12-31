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

struct ListNode {
	int val;
	ListNode *next;
};

ListNode *createNode(int val) {
	ListNode *newNode = new ListNode();
	newNode->val = val;
	newNode->next = NULL;

	return newNode;
}

ListNode* fnc() {
		ListNode *headA, *headB, *headA1;
	headA = new ListNode();
	headA->val = 5;

	headA1 = new ListNode();
	headA1->val = 4;

	headA->next = headA1;

	ListNode *headA2 = createNode(3);
	headA1->next = headA2;

	return headA;
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
	
	ListNode *headA, *headB, *headA1;
	// headA = new ListNode();
	// headA->val = 5;

	// headA1 = new ListNode();
	// headA1->val = 4;

	// headA->next = headA1;

	// ListNode *headA2 = createNode(3);
	// headA1->next = headA2;
	headA= fnc();

	ListNode *curNode = headA;
	while (curNode != NULL) {
		cout << curNode->val << endl;
		curNode = curNode->next;
	}

	vector<ListNode*> v;
	v.push_back(headA);
	v.push_back(headA1);
	cout << v[1]->val << endl;

}