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
vector<int> adj[limit+1];
vector<bool> vis(limit+1);
vector<int> nodeAncestors;

bool dfs(int curNode, int targetNode) {
	if (curNode == targetNode) {
		nodeAncestors.push_back(curNode);
		return true;
	}
	if (int(adj[curNode].size()) == 0) return false;

	vis[curNode] = true;
	bool IsFoundNode = false;
	for (int to : adj[curNode]) {
		if (vis[to]) continue;
		IsFoundNode = IsFoundNode || dfs(to, targetNode);
	}

	if (IsFoundNode) nodeAncestors.push_back(curNode);

	// rje()<<rji(curNode) rji(IsFoundNode);
	return IsFoundNode;
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
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v; cin>>u>>v;
		adj[u].push_back(v);
	}

	int targetNode1 = 5, targetNode2 = 4;

	bool tmp = dfs(3, targetNode1);
	set<int> st;
	for (int X : nodeAncestors) {
		st.insert(X);
	}
	rje()<<rji(nodeAncestors);
	nodeAncestors.clear();
	for (int i = 0; i <= limit; i++) vis[i] = false;

	tmp = dfs(3, targetNode2);
	rje()<<rji(nodeAncestors);

	int ans;
	for (int X : nodeAncestors) {
		if (st.find(X) != st.end()) {
			ans = X;
			break;
		}
	}

	cout << ans << endl;




}