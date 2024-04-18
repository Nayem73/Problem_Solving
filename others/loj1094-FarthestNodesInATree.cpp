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

const int LIMIT = 30000;
vector<pair<int,int>> adj[LIMIT+1];
int ans = 0, ansNode;

void dfs(int curNode, int curDist, int par) {
	if (curDist >= ans) {
		ans = curDist;
		ansNode = curNode;
	}
	for (auto X : adj[curNode]) {
		int to = X.first;
		int toCost = X.second;
		if (to == par) continue;
		dfs(to, curDist+toCost, curNode);
	}
}

void fnc(int tc) {
	int n; cin >> n;
	for (int i = 0; i < n-1; i++) {
		int u, v, w; cin>>u>>v>>w;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}

	int st = 0;
	dfs(st, 0, -1);
	// ans = 0;
	dfs(ansNode, 0, -1);

	cout << "Case "<<tc<<": "<<ans << endl;
	ans=0,ansNode=0;
	for (int i = 0; i <= LIMIT; i++) adj[i].clear();
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
	int t; cin >> t; int tc = 1;
	while (t--) {
		fnc(tc);
		tc++;
	}
}