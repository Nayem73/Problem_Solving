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
	string s = "abab", p = "ba";
	vector<int> vis(125);
	int n = s.size(), m = p.size();
	if (n < m) {
		////////////
	}
	for (int i = 0; i < m; i++) {
		vis[p[i]]++;
	}

	for (int i = 0; i < m; i++) {
		vis[s[i]]--;
	}

	int lo = 0, hi = m-1;
	vector<int> out;
	while (hi < n) {
		bool flg = true;
		for (int i = 97; i <= 122; i++) {
			if (vis[i] != 0) flg = false;
		}

		if (flg) {
			out.push_back(lo);
			// for (int i = 0; i < m; i++) {
			// 	vis[p[i]]++;
			// }
			// vis[s[lo]]--;
		}
		
		vis[s[lo]]++;
		lo++; hi++;

		if (hi < n) {
			// vis[s[lo]]--;
			vis[s[hi]]--;

			rje()<<rji(lo) rji(hi) rji(vis['c']);
			for (int i = lo; i <= hi; i++) cerr << vis[s[i]] << ' ';
			cerr << endl;
		}

	}

	rje()<<rji(out);
}