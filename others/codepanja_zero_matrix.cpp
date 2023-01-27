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
int tc = 0;

void test_case() {
	int n, m; cin >> n>>m;
	vector<vector<int>> grid(n, vector<int> (m));
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int tmp; cin >> tmp;
			grid[i][j] = tmp;
			sum += tmp;
		}
	}
	// rje()<<++tc<<rji(sum);

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < m; j++) {
			int cur = -grid[i][j];
			grid[i+1][j] += cur;
		}
	}

	for (int j = 0; j < m-1; j++) {
		int cur = -grid[n-1][j];
		grid[n-1][j+1] += cur;
	}
	if (!grid[n-1][m-1]) cout << "Case #"<<++tc<<": "<<"YES\n\n";
	else cout << "Case #"<<++tc<<": "<<"NO\n\n";
}

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
	int t; cin >> t; while (t--) {
		test_case();
	}
}