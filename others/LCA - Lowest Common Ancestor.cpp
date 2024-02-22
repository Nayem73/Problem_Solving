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
const int limit = 9;
int n, m;
int LCANode1 = 5, LCANode2 = 4;
vector<int> adj[limit+1];
vector<bool> vis(limit+1);

vector<int> node1Ancestors;
vector<int> node2Ancestors;

void dfs(int curNode, bool isFoundNode1, bool isFoundNode2) {
	isFoundNode1 = isFoundNode1 || (curNode == LCANode1);
	isFoundNode2 = isFoundNode2 || (curNode == LCANode2);

	vis[curNode] = true;
	for (int to : adj[curNode]) {
		if (vis[to]) continue;
		dfs(to, isFoundNode1, isFoundNode2);
	}

	// rje()<<rji(curNode) rji(isFoundNode1);

	if (isFoundNode1) node1Ancestors.push_back(curNode);
	if (isFoundNode2) node2Ancestors.push_back(curNode);
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
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
	}

	dfs(3, false, false);

	rje()<<rji(node1Ancestors);
	rje()<<rji(node2Ancestors);

}