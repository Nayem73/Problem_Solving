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
	vector<string> words{
		"aba","bcb","ece","aa","e"
	};

	vector<vector<int>> queries{
		{0,2}, {1,4}, {1,1}
	};

	vector<bool> ok(125);
	for (int i = 97; i <= 122; i++) {
		if (i=='a'||i=='e'||i=='i'||i=='o'||i=='u') ok[i] = true;
	}
	// rje()<<rji(ok);
	int n = words.size();
	vector<int> pref(n);
	// if (ok[])
	
	for (int i = 0; i < n; i++) {
		int lo = words[i][0];
		int ln = words[i].size() - 1;
		int hi = words[i][ln];
		// cerr << lo << ' ' << hi << endl;
		if (ok[lo] && ok[hi]) pref[i] = (i?pref[i-1]:0) + 1;
		else pref[i] = (i?pref[i-1]:0);
	}
	// rje()<<rji(pref);

	vector<int> ans;
	for (auto X: queries) {
		int lo = X[0], hi = X[1];
		int got = pref[hi] - (lo-1 >= 0?pref[lo-1]:0);
		ans.push_back(got);
	}
	// rje()<<rji(ans);
}