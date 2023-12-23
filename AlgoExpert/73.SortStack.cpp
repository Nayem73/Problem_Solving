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

void sortStack(stack<int> &st, int top) {
	if (st.empty() || top >= st.top()) {
		st.push(top);
		return;
	}

	int curTop = st.top();
	st.pop();
	sortStack(st, top);

	st.push(curTop);

}

stack<int> rec(stack<int> &st) {
	if ((int)st.size() == 1) return st;

	int top = st.top();
	st.pop();
	rec(st);

	sortStack(st, top);
	return st;

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
	stack<int> stIn;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		stIn.push(tmp);
	}

	//int top = st.top();
	//st.pop();
	stack<int> got = rec(stIn);
	while (!got.empty()) {
		cout << got.top() << endl;
		got.pop();
	}
}