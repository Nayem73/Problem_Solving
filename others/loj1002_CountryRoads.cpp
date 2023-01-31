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
const int nax = 503;
const int inf = 2e9;
vector<pair<int,int>> adj[nax];

void dijkstra(int st) {
	vector<int> dis(nax, inf);
	priority_queue<pair<int,int>> pq;
	pq.push({-0, st});
	dis[st] = 0;

	while (!pq.empty()) {
		int curnode = pq.top().second;
		int curdis = -pq.top().first;
		pq.pop();

		for (auto X: adj[curnode]) {
			int to = X.first;
			int todis = X.second;
			if (max(curdis, todis) >= dis[to]) continue;
			dis[to] = max(curdis, todis);
			rje()<<rji(curdis)rji(curnode)rji(to)rji(todis)rji(dis[to]);
			pq.push({-dis[to], to});
		}
	}

	for (int i = 0; i <= 7; i++) {
		rje()<< i << rji(dis[i]);
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
	int t; cin >> t; while (t--) {
		int n, m; cin>>n>>m;
		for (int i = 0; i < m; i++) {
			int u,v,w; cin>>u>>v>>w;
			adj[u].push_back({v,w});
			adj[v].push_back({u,w});
		}

		int st; cin>>st;

		dijkstra(st);



	}
}