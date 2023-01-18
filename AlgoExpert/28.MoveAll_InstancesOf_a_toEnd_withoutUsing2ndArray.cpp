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
	vector<int> s{2,1,2,2,2,3,4,2};
	int instance = 2;

	sort(s.begin(), s.end());
	rje()<<rji(s);
	//-> if (!instance in array then return false)

	// wow ei lo hi korar dorkar e hoynay Alhamdulillah.
	// int cnt_instance = 0;
	// int lo = -1, hi = -1;
	// for (int i = 0; i < (int)s.size(); i++) {
	// 	int X = s[i];
	// 	if (X==instance) cnt_instance++;
	// 	if (X == instance && lo==-1) lo = i;
	// 	else if (X == instance && lo != -1) hi = i;
	// }

	int indx = 0;
	for (int i = 0; i < (int)s.size(); i++) {
		int X = s[i];
		if (X != instance) s[indx++] = X;
	}

	for (int i = indx; i < (int)s.size(); i++) {
		s[i] = instance;
	}

	rje()<<rji(s);
}