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
	vector<vector<int>> roads {
		{0,1},
		{0,3},
		{1,2},
		{1,3}
	};

	vector<int> adj[n+1];
	for (auto v : roads) {
		adj[v[0]].push_back(v[1]);
		adj[v[1]].push_back(v[0]);
	}

	for (int i = 0; i < n; i++) {
		sort(adj[i].begin(), adj[i].end());
		rje()<<rji(i) rji(adj[i]);
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			auto it = lower_bound(adj[i].begin(), adj[i].end(), j);
			int tmpTotal = 0;
			if (it != adj[i].end() && *it == j) tmpTotal = -1;
			tmpTotal += (int)adj[i].size()+(int)adj[j].size();
			ans = max(ans, tmpTotal);
		}
	}
	rje()<<rji(ans);
}