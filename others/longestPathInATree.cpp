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

vector<int> adj[10007];
int farthestNode = 0;
int farthestDist = 0;

vector<bool> vis(10007);

void dfs(int node, int dist) {
	cerr << node << ' '<< dist << endl;
	if (vis[node]) return;
	vis[node] = true;

	for (int to : adj[node]) {
		if (vis[to]) continue;
		dfs(to, dist+1);
		// vis[to] = true;
		if (dist+1 >= farthestDist) {
			farthestDist = dist+1;
			farthestNode = to;
		}
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
	int n; cin >> n;
	cerr << n << endl;
	int u, v;
	for (int i = 1; i < n; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	dfs(u, 0);

	rje()<<rji(farthestNode)<<rji(farthestDist);

	for (int i = 0; i <= n; i++) vis[i] = false;

	dfs(farthestNode, 0);
	rje()<<rji(farthestNode)<<rji(farthestDist);
	cout << farthestDist << endl;
}