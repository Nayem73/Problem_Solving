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

vector<int> adj[203];
vector<bool> vis(203);

void dfs(int cur) {
	vis[cur] = true;
	for (int to: adj[cur]) {
		if (!vis[to]) {
			dfs(to);
		}
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
	vector<vector<int>> isConnected{
		// {1,1,0},
		// {1,1,0},
		// {0,0,1}
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};

	int i = -1;
	for (auto X: isConnected) {
		i++;
		for (int j = 0; j < (int)X.size(); j++) {
			if (X[j]) {
				adj[i].push_back(j);
				//adj[j].push_back(i);
			}
		}
	}

	for (int j = 0; j < (int)isConnected.size(); j++) {
		rje()<<rji(adj[j]);
	}

	int ans = 0;
	for (int j = 0; j < (int)isConnected.size(); j++) {
		if (!vis[j]) {
			dfs(j);
			ans++;
		}
	}

	rje()<<rji(ans);
}