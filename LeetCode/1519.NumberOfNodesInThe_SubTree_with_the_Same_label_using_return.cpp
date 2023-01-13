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
vector<int> adj[100007];
vector<bool> vis(100007);
string labels;
vector<int> out(100007);

vector<int> dfs(int cur) {
	vis[cur] = true;
	vector<int> ret(130);
	for (int X: adj[cur]) {
		if (vis[X]) continue;
		vector<int> got_chars = dfs(X);
		for (int i = 97; i < 130; i++) ret[i] += got_chars[i];
	}
	ret[(int)labels[cur]]++;
	out[cur] = ret[(int)labels[cur]];

	map<char,int> mp;
	for (int i = 97; i < 130; i++) if (ret[i]) mp[(char)i] = ret[i];
	rje()<<cur<<rji(mp);
	return ret;
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
	// vector<vector<int>> edges{{0,1}, {0,2}, {1,4}, {1,5}, {2,3}, {2,6}};
	// int n = 7; labels = "abaedcd";

	vector<vector<int>> edges{{0,1}, {1,2}, {0,3}};
	int n = 4; labels = "bbbb";


	// vector<vector<int>> edges{{0,1}, {0,2}, {1,3}, {0,4}};
	// int n = 5; labels = "aabab";

	for (auto X: edges) {
		adj[X[0]].push_back((X[1]));
		adj[X[1]].push_back((X[0]));
	}

	vector<int> tmp = dfs(0);
	out.resize(n);
	rje()<<rji(out);

}