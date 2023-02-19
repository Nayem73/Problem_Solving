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
	//https://www.jiakaobo.com/leetcode/651.%204%20Keys%20Keyboard.html
	int n = 7;
	vector<vector<int>> dp(n+1, vector<int> (3));
	// dp[1] = 0;

	for (int i = 1; i <= n; i++) {
		// dp[i][0] = max({dp[i][0], dp[i-1][1]+1, dp[i-1][0]+1});
		dp[i][0] = max({dp[i][0], dp[i-1][0]+1, dp[i-1][2]+dp[i-1][1]});
		// dp[i][1] = max(dp[i][1], dp[i-1][1] + dp[i-1][1]/2);
		dp[i][1] = max(dp[i][1], dp[i-1][1]);
		if (i+3 <= n) {
			// dp[i+3][1] = max({dp[i+3][1],dp[i+3][0], max(dp[i][1], dp[i][0]) * 2});
			dp[i+3][0] = max({dp[i+3][0], dp[i][0] * 2});
			dp[i+3][1] = max(dp[i+3][1], dp[i][0]);
			dp[i+3][2] = dp[i][0]*2;
		}
	}

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		rje()<<rji(i)<<rji(dp[i][0]) rji(dp[i][2]) rji(dp[i][1]);
		ans = max(dp[i][0], dp[i][2]);
	}
}