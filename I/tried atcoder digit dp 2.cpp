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
const int inf = 2e9;

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
		// 360
		string s; cin >> s;
		int K; cin >> K;
		int n = s.size();
		// int dp[n][10][2] = {};
		vector<vector<vector<int>>> dp(n+1, vector<vector<int>> (10, vector<int> (2)));
		// rje()<<rji(dp);
		vector<int> ch;
		// for (int i = 0; i < s[0]-'0'; i++) dp[0][i][1] = 1;
		// for (int i = s[0]-'0'; i < 10; i++) dp[0][i][1] = -inf;
		// dp[0][s[0]-'0'][0] = 1;
		// dp[0][0][1] = 1;
		dp[0][0][0] = 1;

		// long long ans = 0;
		for (int i = 0; i < n; i++) {
			int cur = s[i]-'0';
			// int prv = s[i-1]-'0';
			for (int div = 0; div < K; div++) {
				for (int digit = 0; digit <= 9; digit++) {
					// if (div-digit < 0) continue;
					if (cur==digit) {
						dp[i+1][(div+digit)%K][0] += dp[i][div][0] + 0;
						// rje()<< rji(1)<<rji(div)<<rji(digit)<<rji((div+digit)%K)rji(dp[i-1][div][0])<<rji(dp[i][(div+digit)%K][0]);
					}
					else {
						if (digit < cur) {
							dp[i+1][(div+digit)%K][1] += dp[i][div][0] + 0;
						 // rje()<< rji(3)<<rji(div)<<rji(digit)<<rji((div+digit)%K)rji(dp[i-1][div][0])<<rji(dp[i][(div+digit)%K][1]);
						}
						 dp[i+1][(div+digit)%K][1] += dp[i][div][1] + 0;
						 // rje()<< rji(3)<<rji(div)<<rji(digit)<<rji((div+digit)%K)rji(dp[i-1][div][1])<<rji(dp[i][(div+digit)%K][1]);
					}
				}
			}
		}


		int ans = dp[n-1][0][1] + dp[n-1][0][0];
		cout << ans << endl;
}
// 512