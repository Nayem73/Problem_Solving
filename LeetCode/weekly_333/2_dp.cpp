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
	int n = 82;
	vector<int> p2;
	for (int i = 0; i <= 17; i++) {
		p2.push_back(pow(2, i));
	}
	rje()<<rji(p2);

	const int nax = 131072 + 7;
	// const int nax = 66;
	const int inf = 2e9;
	vector<int> dp(nax, inf);
	dp[n] = 0; 

	for (int i = n; i < nax; i++) {
		if (dp[i] == inf) continue;
		for (int x: p2) {
			if (i+x >= nax) break;
			dp[i+x] = min(dp[i+x], dp[i]+1);
		}
	}

	int ans = inf;
	for (int i = n; i < nax; i++) {
		if (dp[i] == inf) continue;
		rje()<<rji(i)rji(dp[i]);
		auto it = lower_bound(p2.begin(), p2.end(), i);
		if (*it == i) ans = min(ans, dp[i]+1);
	}

	rje()<<rji(ans);

	for (int i = nax-1; i >= 0; i--) {
		if (dp[i] == inf) continue;
		for (int x: p2) {
			if (i-x < 0) break;
			dp[i-x] = min(dp[i-x], dp[i]+1);
		}
	}

	// for (int i = 40; i >= 0; i--) {
	// 	if (dp[i] == inf) continue;
	// 	rje()<<rji(i)rji(dp[i]);
	// 	// auto it = lower_bound(p2.begin(), p2.end(), i);
	// 	// if (*it == i) ans = min(ans, dp[i]+1);
	// }
	ans = min(ans, dp[0]);
	rje()<<rji(ans);
}