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
map<int,int> d1;
map<int,int> d2;
vector<bool> vis(100003);
bool one_or_two = true;

void dfs(int cur, int dis) {
	vis[cur] = true;
	if (one_or_two) d1[cur] = dis;
	else d2[cur] = dis;

	for (int X: adj[cur]) {
		if (X<0 || vis[X]) continue;
		dfs(X, dis+1);
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
	vector<int> edges{4,4,8,-1,9,8,4,4,1,1};
	for (int i = 0; i < (int)edges.size(); i++) {
		adj[i].push_back(edges[i]);
	}

	int node1 = 5, node2 = 6;

	dfs(node1, 0);
	for (int i = 0; i < 100003; i++) vis[i] = false;
	one_or_two = false;
	dfs(node2, 0);

	rje()<<rji(d1);
	rje()<<rji(d2);

	
	int ans = 2e9;
    int ans_indx = 0;
	for (auto X: d1) {
		auto it = d2.find(X.first);
		if (it != d2.end()) {
			//ans = min(ans, );
            int got = X.second+ it->second;
            if (got < ans) {
                ans = got;
                ans_indx = X.first;
                cout << ans_indx << endl;
            }
            else if (got == ans) {
            	ans_indx = min(ans_indx, X.first);
            }
		}
	}

	rje()<<rji(ans)rji(ans_indx);
}