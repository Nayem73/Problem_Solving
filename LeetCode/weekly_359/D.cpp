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
	// vector<int> v{1,6,7,3,6,9,1,6,2,1,8,4,1};
	vector<int> v{1,3,2,3,1,3};
	int k = 3;
	int n = v.size();
	vector<int> occ(1003);
	vector<int> adj[10001];
	set<int> st;

	for (int i = 0; i < n; i++) {
		occ[v[i]]++;
		adj[v[i]].push_back(i);
		st.insert(v[i]);
	}

int ans = 1;

	for (int i : st) {
		// if (!adj[i].size()) continue;
		sort(adj[i].begin(), adj[i].end());
		rje()<<rji(adj[i]);
		int cnt = 1;
		for (int j = 1; j < (int)adj[i].size(); j++) {
			if (adj[i][j] - (adj[i][j-1]+1) > k) {
				cnt = 1;
			}
			else {
				cnt++;
				ans = max(ans, cnt);
			}
		}
	}

	cerr << ans << endl;

	//1-2   2-2    3-3

}