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
	vector<vector<vector<int>>> dp(n, vector<vector<int>> (10, vector<int> (2)));
	// rje()<<rji(dp);
	vector<int> ch;
	for (int i = 0; i < s[0]-'0'; i++) dp[0][i][1] = i;
	for (int i = s[0]-'0'; i < 10; i++) dp[0][i][1] = -inf;
	dp[0][s[0]-'0'][0] = s[0]-'0';
	
	long long ans = 0;
	for (int i = 1; i < n; i++) {
		int cur = s[i]-'0';
		int prv = s[i-1]-'0';

		for (int limit = 0; limit <= 9; limit++) {
			for (int pl = 0; pl <= 9; pl++) {
				rje()<<rji(prv)<<rji(cur)<<rji(pl)<<rji(limit);
				if (limit == cur && pl == prv) {
					dp[i][limit][0] = dp[i-1][pl][0] + limit;
					if (dp[i][limit][0] && dp[i][limit][0] % K == 0) ans++, ch.push_back(dp[i][limit][0]);
					rje()<<1<<rji(dp[i][limit][0])<<rji(ans);
				}

				else {
					if (pl==prv && limit<cur) dp[i][limit][1] = dp[i-1][pl][0] + limit;
					else dp[i][limit][1] = (dp[i-1][pl][1]==-inf?0:dp[i-1][pl][1]) + (dp[i-1][pl][1]==-inf?0:limit);
					if (dp[i][limit][1] && dp[i][limit][1]!=-inf && dp[i][limit][1] % K == 0) ans++, ch.push_back(dp[i][limit][1]);
					rje()<<2<<rji(dp[i][limit][1])<<rji(ans)<<rji(dp[i-1][pl][1]);
					// if ()
				}

			}
		}
	}

	sort(ch.begin(), ch.end());
	rje()<<rji(ch);
	cout << ans << endl;
}
// 512