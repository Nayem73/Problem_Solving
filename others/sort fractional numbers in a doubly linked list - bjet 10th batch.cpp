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

struct Fraction {
	int numerator;
	int denominator;
};

struct Node {
	Fraction val;
	Node* next;
	Node* prev;
	Node(Fraction X) : val(X), next(NULL), prev(NULL) {}
};

bool cmp(const Fraction& a, const Fraction& b) {
	return a.numerator*b.denominator < b.numerator*a.denominator;
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
	
	//building the doubly linked list.
	Node* head = new Node({1,2});
	Node* newNode1 = new Node({2,3});
	head->next = newNode1;
	newNode1->prev = head;
	Node* newNode2 = new Node({4,7});
	newNode1->next = newNode2;
	newNode2->prev = newNode1;

	vector<Fraction> fractions;
	Node* curNode = head;
	while (curNode != NULL) {
		fractions.push_back(curNode->val);
		curNode = curNode->next;
	}

	sort(fractions.begin(), fractions.end(), cmp);

	free(head);
	free(newNode1);
	free(newNode2);

	Node* prevNode = NULL;
	head = NULL;
	for (Fraction X : fractions) {
		cout << X.numerator << ' ' << X.denominator << endl;
		curNode = new Node(X);
		if (head == NULL) head = curNode;
		else {
			curNode->prev = prevNode;
			prevNode->next = curNode;
		}
		prevNode = curNode;
	}

	cout << endl;
	curNode = head;
	while (curNode != NULL) {
		cout << curNode->val.numerator << ' '<< curNode->val.denominator << endl;
		curNode = curNode->next;
	}
}