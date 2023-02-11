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
const int inf = 2e9;
vector<vector<int>> dist(103, vector<int> (3, inf));
vector<pair<int,int>> adj[103];

void dfs(int cur, int curcol) {
	rje()<<rji(cur) rji(curcol) rji(dist[cur][curcol]);

	for (auto X: adj[cur]) {
		cerr << "---\n";
		int tocol = X.second;
		int tonode = X.first;
		if (tocol == curcol) continue;
		cerr << "~~~\n";
		if (dist[cur][curcol] + 1 >= dist[tonode][tocol]) continue;

		dist[tonode][tocol] = min(dist[tonode][tocol], dist[cur][curcol] + 1);
		dfs(tonode, tocol);
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


	vector<vector<int>> redEdges{
		// {0,1}, {1,2}, {3,3}
		{0,1}, {1,2}
	};

	vector<vector<int>> blueEdges{
		// {1,3}, {3,2}
		// {2,1}
	};

	for (auto X: redEdges) {
		adj[X[0]].push_back({X[1], 0});
	}
	for (auto X: blueEdges) {
		adj[X[0]].push_back({X[1], 1});
	}

	dist[0][2] = 0;
	dfs(0, 2);
	for (int i = 0; i < 4; i++) {
		rje()<<rji(i) rji(dist[i][0]) rji(dist[i][1]);
	}
}