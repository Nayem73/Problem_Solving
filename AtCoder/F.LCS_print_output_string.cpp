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
	string s, t;
	cin >> s >> t;
	int n = s.size(), m = t.size();

	vector<vector<int>> dp(n, vector<int> (m));
	vector<vector<int>> choice(n, vector<int> (m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i) {
				dp[i][j] = dp[i-1][j];
				choice[i][j] = 0;
			}
			if (j && dp[i][j-1] > dp[i][j]) {
				dp[i][j] = dp[i][j-1];
				choice[i][j] = 1;
			}

			if (s[i] == t[j]) {
				int tmpGot = (i&&j?dp[i-1][j-1]:0) + 1;
				if (tmpGot > dp[i][j]) {
					dp[i][j] = tmpGot;
					choice[i][j] = 2;
				}
			}
		}
	}


	cerr << dp[n-1][m-1] <<endl;
	
	int i = n-1, j = m-1;
	string out;

	while (i >= 0 && j >= 0) {
		if (choice[i][j] == 0) i--;
		else if (choice[i][j] == 1) j--;
		else if (choice[i][j] == 2) {
			out += s[i];
			i--; j--;
		}
	}
	reverse(out.begin(), out.end());
	cout << out << endl;
}