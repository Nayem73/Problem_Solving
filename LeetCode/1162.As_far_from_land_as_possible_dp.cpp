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

	vector<vector<int>> grid{
		{1,0,0},
		{0,0,0},
		{0,0,0}
		// {1,0,1},
		// {0,0,0},
		// {1,0,1}
	};

	int n = grid.size();
	const int inf = 2e9;
	vector<vector<int>> dp(n, vector<int> (n, inf));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == 1) dp[i][j] = 0;
			else {
				dp[i][j] = min({dp[i][j], (i?dp[i-1][j] + 1:inf), (j?dp[i][j-1] + 1:inf)});
			}
		}
	}

	int ans = -1;
	for (int i = n-1; i >= 0; i--) {
		for (int j = n-1; j >= 0; j--) {
			dp[i][j] = min({dp[i][j], (i+1<n?dp[i+1][j]+1:inf), (j+1<n?dp[i][j+1]+1:inf)});
			ans = max(ans, dp[i][j]);
		}
	}

	ans = ans == inf || ans == 0? -1: ans;
	cerr << ans << endl;
}