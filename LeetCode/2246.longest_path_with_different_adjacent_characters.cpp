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

const int NAX = 6;
// const int NAX = 4;
vector<int> adj[NAX];
vector<bool> vis(NAX);
// string s = "abbcbe";
string s = "abacbe";
// string s = "aabc";

// void dfs(int cur, int par) { starting with a random leaf wuldn't work like test case 2, and
																//starting with all leaves = tle
// 	vis[cur] = true;
	
// 	if (s[cur] != s[par]) {
// 		greedy[cur] = max(greedy[cur], greedy[par]+1);
// 	}

// 	for (int X: adj[cur]) {
// 		if (vis[X]) continue;
// 		dfs(X, cur);
// 	}
// }

vector<int> separate;
int dfs(int cur, int par) {
	vis[cur] = true;

	int greedy_cur = 0;
	if (s[cur] != s[par]) {
		greedy_cur = 1;
		if (cur == 0) cout << s[cur] << ' '<<s[par] << endl;
	}

	vector<int> tmp;
	for (int X: adj[cur]) {
		if (vis[X]) continue;
		int got = dfs(X, cur);

		if (s[cur] == s[X]) separate.push_back(got);
		else tmp.push_back(got);

	}

	sort(tmp.rbegin(), tmp.rend());
	int got = 0; if (tmp.size()) got = tmp[0];

	rje()<<cur<<rji(got+1);
	if (cur == 0 && (int)tmp.size()>=2) {
		got += tmp[1];
	}
	return got + 1;

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
	// int n; cin >> n;
	vector<int> parent = {-1,0,0,1,1,2}; int n = parent.size();
	for (int i = 1; i < n; i++) {
		// int u, v; cin >>u>>v;
		// adj[u].push_back(v);
		// adj[v].push_back(u);
		int u = parent[i], v = i;
    adj[u].push_back(v);
    adj[v].push_back(u);
	}

	cerr << "ans => "<< dfs(0,0) << endl;
}
// 1, 2, 1, 3, 1, 2]] 