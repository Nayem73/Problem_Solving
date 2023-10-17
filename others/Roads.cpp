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
vector<pair<int, pair<int,int>>> adj[103];

void dij(int st, int des, int K) {
	priority_queue<pair<pair<int,int>, int>> pq;
	pq.push({{0, 0,}, st});
	while (!pq.empty()) {
		auto cur = pq.top();
		pq.pop();
		int curnode = cur.second;
		int curdis = -cur.first.first;
		int curtoll = -cur.first.second;
		cerr << curnode << ' '<<curdis<< ' '<<curtoll<<":\n";

		for (auto X: adj[curnode]) {
			int to = X.first;
			int todis = X.second.first;
			int totoll = X.second.second;

			int totaldis = curdis + todis;
			int totaltoll = curtoll = totoll;

			if (totaltoll > K) continue;
			pq.push({{-totaldis, -totaltoll}, to});
			cerr << to << ' '<<todis<< ' '<<totoll<<"\n";
		}
		cerr<<endl;
	}
}

void tc() {
	int K, n, r;
	cin >>K>>n>>r;

	for (int i = 0; i < r; i++) {
		int u, v, l, t;
		cin >>u>>v>>l>>t;
		adj[u].push_back({v, {l, t}});
	}

	dij(1, 0, K);
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
		tc();
	}
}