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
	int n = 49;
	const int inf = 2e9;
	vector<int> dp(n+1, inf);
	dp[1] = 0;

	for (int i = 1; i <= n; i++) {
		if (i+ i > n) break;
		dp[i+i] = min(dp[i+i], dp[i] + 2);
		int cnt = dp[i] + 2;

		for (int j = i+i+i; j <= n; j += i) {
			//dp[j] = min(dp[j], dp[j-i] + 1);
			dp[j] = min(dp[j], ++cnt);
			//49 er jonno 7 kore kore gele 14 pabo but i = 6 ei 42 er man
      //update hoy 12 hoy jasse so  dp[j-i] korle 49 e updated man
      //jog hoitese.. to avoid this I use the crude way = ++cnt
      //Alhamdulillah
		}
	}

	rje()<<rji(dp[42]);

	// for (int i = 1; i <= n; i++) {
	// 	rje()<<rji(i)<<rji(dp[i]);
	// }
}


// A 1
// AA 2
// AAAA 4
// AAAA AAAA 8
// AAAA AAAA AAAA AAAA 16

// AAA 