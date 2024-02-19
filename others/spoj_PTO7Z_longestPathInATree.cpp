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

const int limit = 10000;
vector<int> adj[limit+3];
vector<bool> vis(limit+3);

int farthestNode, farthestNodeDist;

void dfs(int curNode, int curDist) {
	if (curDist >= farthestNodeDist) {
		farthestNodeDist = curDist;
		farthestNode = curNode;
	}
	vis[curNode] = true;

	for (int X : adj[curNode]) {
		if (vis[X]) continue;
		dfs(X, curDist+1);
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
	for (int i = 0; i < n; i++) {
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	dfs(1, 0);
	// cout <<farthestNode << ": "<< farthestNodeDist << endl;

	for (int i = 0; i <= limit; i++) {
		vis[i] = false;
	}

	farthestNodeDist = 0;
	dfs(farthestNode, 0);
	cout << farthestNodeDist << endl;
}