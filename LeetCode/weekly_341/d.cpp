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

vector<bool> vis(1000);
vector<int> adj[1000];

void dfs(int cur, int clr, vector<int> &price, vector<int> &half) {
	if (clr > 0) half[cur] = price[cur]/2;
	// rje()<<rji(cur)rji(clr);
	
	vis[cur] = true;
	for (int X: adj[cur]) {
		if (vis[X]) continue;
		dfs(X, -clr, price, half);
	}
}

int dij(int st, int en, vector<int> &half) {
	vector<int> dist(100000, 2e9);
	priority_queue<pair<int,int>> pq;
	dist[st] = half[st];
	pq.push({-dist[st], st});
	while (!pq.empty()) {
		auto nw = pq.top();
		pq.pop();
		int curnode = nw.second;
		int curdist = -nw.first;
		if (curnode == en) break;

		for (auto i: adj[curnode]) {
			int to = i;
			int edgecst = half[to];
			if (curdist+edgecst < dist[to]) {
				dist[to] = curdist + edgecst;
				pq.push({-dist[to], to});
			}
		}
	}

	//<<rji(dist[en]);
	return dist[en];
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
	int n = 4;
	vector<vector<int>> edges{
		{0,1},
		{1,2},
		{1,3}
	};
	vector<int> price{2,2,10,6};
	
	vector<vector<int>> trips{
		{0,3},
		{2,1},
		{2,3}
	};

	for (int i = 0; i < n-1; i++) {
		int u = edges[i][0];
		int v = edges[i][1];
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	// int cntt =-1;
	// for (auto X: adj) {
	// 	if (X.empty()) continue;
	// 	//<<rji(X);
	// }
	vector<int> half = price;
	dfs(0, 1, price, half);
	//<<rji(half);

	int ans1 = 0;
	for (auto V: trips) {
		ans1 += dij(V[0], V[1], half);
	}
		//<<rji(ans1);




		

		half = price;
		for (int i = 0; i < 1000; i++) vis[i] = 0;
		dfs(0, -1, price, half);
		//<<rji(half);


		int ans2 = 0;
	for (auto V: trips) {
		ans2 += dij(V[0], V[1], half);
	}
		//<<rji(ans2);

		
}