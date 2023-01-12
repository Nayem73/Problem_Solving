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
	int n; cin >> n;
	vector<int> v;
	int t = n;
	while (t) {
		v.push_back(t%10);
		t/=10;
	}

	reverse(v.begin(), v.end());
	rje()<<rji(v);
	n = v.size();
	vector<vector<vector<long long>>> dp(n, vector<vector<long long>> (10, vector<long long> (2, 1)));
	//for (int i = 0; i < v[0]; i++) dp[0][i][1] = i; no need cz of k<v[i-1] in 69 line

	for (int i = 0; i < n; i++) {

		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= 9; k++) {
				if (j <= v[i]) {
					dp[i][j][0] = max(dp[i][j][0], (i?dp[i-1][k][0]:1)*j);
				}


				if (i>0) {
					dp[i][j][1] = max({dp[i][j][1], dp[i-1][k][1]*j, (k<v[i-1]?dp[i-1][k][0]:0)*j});
				}
			}
		}



	}

		rje()<<rji(dp[n-1]);
		long long ans = 0;
		for (int i = 0; i <= 9; i++) {
			ans = max({ans, dp[n-1][i][0], dp[n-1][i][1]});
		}

		cout << ans << endl;
}