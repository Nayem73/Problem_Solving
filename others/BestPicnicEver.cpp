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
const int limit = 1000;
vector<int> adj[limit+1];
vector<int> visitCount(limit+1);
vector<bool> vis(limit+1);

void dfs(int curNode) {
	visitCount[curNode]++;
	vis[curNode] = true;
	for (int X: adj[curNode]) {
		if (vis[X]) continue;
		dfs(X);
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
	int t, tc = 0; cin >> t;
	while (t--) {
		int k, n, m;
		cin>>k>>n>>m;
		vector<int> person(k);
		for (int &X: person) cin >> X;

		for (int i = 0; i < m; i++) {
			int u, v; cin>>u>>v;
			adj[u].push_back(v);
		}

		for (int i = 0; i < k; i++) {
			dfs(person[i]);
			for (int j = 0; j <= limit; j++) vis[j] = false;
		}

		int ans = 0;
		for (int i = 0; i <= limit; i++) {
			if (visitCount[i] == k) ans++;
		}
 
		cout<< "Case "<<++tc<<": " << ans << endl;

		for (int i = 0; i <= limit; i++) visitCount[i] = 0, adj[i].clear();
	}
}