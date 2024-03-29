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
const int limit = 1e5;
int n, ok;
vector<int> cats;
vector<int> adj[limit+1];
vector<bool> vis(limit+1);
int ans = 0;

void dfs(int curNode, int curCats) {
	if (curCats + cats[curNode] > ok) return;
	if (cats[curNode] == 0) curCats = 0;
	
	if (adj[curNode].size() == 0) ans++;
	vis[curNode] = true;
	cerr << curNode << ": "<< adj[curNode].size() << endl;

	for (int X: adj[curNode]) {
		if (vis[X]) continue;
		dfs(X, curCats + cats[curNode]);
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
	cin >> n >> ok;
	cats.resize(n+1);
	for (int i = 1; i <= n; i++) {
		int tmp; cin >> tmp;
		cats[i] = tmp;
	}

	for (int i = 1; i < n; i++) {
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	dfs(1, 0);
	cout << ans << endl;
}