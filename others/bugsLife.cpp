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
const int limit = 2000;
vector<int> adj[limit+1];
vector<int> vis(limit+1);
bool isSuspicious = false;

void dfs(int curNode, int parNode, int parColor) {
	if (vis[curNode]) return;
	if (isSuspicious) return;
	int curColor = 1;
	if (parColor == 1) curColor = 2;
	vis[curNode] = curColor;

	for (int X : adj[curNode]) {
		if (X == parNode) continue;
		if (vis[X] == curColor) {
			isSuspicious = true;
			return;
		}
		dfs(X, curNode, curColor);
	}
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
	int t, tc=0; cin>>t;
	while (t--) {
		int n, m; cin>>n>>m;
		for (int i = 0; i < m; i++) {
			int u, v; cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}

		for (int i = 1; i <= n; i++) {
			dfs(i, -1, 1);
			for (int j = 1; j <= limit; j++) vis[j] = false;
		}

		cout<< "Scenario #"<<++tc<< ":\n";
		if (isSuspicious) {
			cout << "Suspicious bugs found!" << endl;
		} else {
			cout << "No suspicious bugs found!" << endl;
		}
		isSuspicious = false;
		for (int i = 0; i <= limit; i++) adj[i].clear(), vis[i] = false;
	}
}