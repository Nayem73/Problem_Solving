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

int dfs(int cur, vector<int> adj[]) {
	int max_ = cur;
	for (int X: adj[cur]) {
		int got_farthest = dfs(X, adj);
		max_ = max(max_, got_farthest);
	}
	return max_;
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
		vector<pair<int,int>> v {
		{1,2},{3,5},{4,7},{6,8},{9,10}
	};

	sort(v.begin(), v.end(), [&](auto X, auto Y) {
		return X.first <= Y.first;
	});

	const int n = v.size();
	const int m = v[n-1].second + 1;
	vector<int> adj[m];
	rje()<<rji(v);
	for (auto X: v) {
		int xx = X.first, yy = X.second;
		adj[xx].push_back(yy);
	}

	vector<int> ans[m];
	for (int ii = m-1; ii >=0 ; ii--) {
		if (adj[ii].empty()) continue;
		int lo = ii, hi = adj[ii][0];
		int got = lo;
		for (int i = lo; i <= hi; i++) {
			got = max(got, dfs(i, adj));
		}
		ans[lo].push_back(got);
		adj[lo].push_back(got);
		rje()<<rji(lo) rji(ans[lo]);
	}

	vector<pair<int,int>> out;
	rje()<<rji(ans);

	for (int i = m-1; i >= 0; i--) {
		if (ans[i].empty()) continue;
		while (true) {
			
		}
	}
}