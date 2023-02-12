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

vector<int> adj[100003];
vector<bool> vis(100003);
long long ans = 0;

int dfs(int cur, int seats) {
	int nodes = 1;
	for (auto X: adj[cur]) {
		if (vis[X]) continue;
		vis[X] = true;
		nodes += dfs(X, seats);
	}

	rje()<<rji(cur) rji(nodes);
	if (cur != 0) {
		ans += ceil(1.0*nodes/seats);
	}
	return nodes;
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
	vector<vector<int>> roads {
		{3,1}, {3,2}, {1,0}, {0,4}, {0,5}, {4,6}
		// {0,1}, {1,3}, {3,2}
	};
	int seats = 2;
	for (auto X: roads) {
		adj[X[0]].push_back(X[1]);
		adj[X[1]].push_back(X[0]);
	}

	vis[0] = true;
	dfs(0, seats);
	cerr << ans << endl;
}