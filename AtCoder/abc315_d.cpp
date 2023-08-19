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
	int n, m; cin >> n >> m;
	vector<vector<char>> adj(n, vector<char> (m, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> adj[i][j];
		}
	}
	rje()<<adj;
	vector<vector<int>> cntR(n, vector<int> (200, 0));
	vector<vector<int>> cntC(m, vector<int> (200, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cntR[i][ adj[i][j] ]++;
		}
	}

	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			cntC[j][ adj[i][j] ]++;
		}
	}

	cerr<< cntC[0]['a']<<endl;

	int rid = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (cntR[i][ adj[i][j] ] >= 2 || cntC[j][ adj[i][j] ] >= 2) {
				// rid += cntR[i][ adj[i][j] ];	
				rid++;
				//rje()<<rji(i)rji(j)rji(cntR[i][ adj[i][j] ])rji(cntC[j][ adj[i][j] ]) rji(rid);
				// cntR[i][ adj[i][j] ] -= cntR[i][ adj[i][j] ];
			}	
		}
	}

	int ans = n*m - rid;
	rje()<<rji(ans);
	cout << ans << endl;
}