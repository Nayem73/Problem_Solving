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
vector<int> leaf;
vector<int> adj[100007];
vector<int> adj2[100007];
vector<bool> vis(100007);
vector<int> out(100007);
bool flg = false;
string labels;

void leaf_finding(int cur) {
	if (vis[cur]) return;
	vis[cur] = true;
	if (adj[cur].size() == (int)1) leaf.push_back(cur);

	// for (auto X: adj) { //what mistakes!
	// 	for (auto Y: X) {
	// 		leaf_finding(Y);
	// 	}
	// }

	for (int X: adj[cur]) {
		leaf_finding(X);
	}
}

void dfs(int cur, vector<int> chars) {
	if (flg) return;
	// if (vis[cur]) {
	// 	if (chars[(int)labels[cur] ] >= out[cur]) {
	// 		out[cur] = chars[(int)labels[cur] ];
	// 	}
	// 	else return;
	// }
	// else {
	// 	vis[cur] = true;
	// 	out[cur] += chars[(int)labels[cur] ];
	// }
	// chars[(int)labels[cur]]++;
	// out[cur]++; //it's own
	// // cout << cur << ' '<< labels << endl;

	out[cur] += chars[(int)labels[cur] ];
	chars[(int)labels[cur]]++;

	if (cur == 0) {flg = true; return;}

	for (int X: adj2[cur]) {
		dfs(X, chars);
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
	vector<vector<int>> edges{{0,1}, {0,2}, {1,4}, {1,5}, {2,3}, {2,6}};
	int n = 7; labels = "abaedcd";

	// vector<vector<int>> edges{{0,1}, {1,2}, {0,3}};
	// int n = 4; labels = "bbbb";


	// vector<vector<int>> edges{{0,1}, {0,2}, {1,3}, {0,4}};
	// int n = 5; labels = "aabab";

	for (auto X: edges) {
		adj[X[0]].push_back(X[1]);
		adj[X[1]].push_back(X[0]);
		adj2[X[1]].push_back(X[0]);
	}

	rje()<<rji(adj[0]);
	leaf_finding(0);
	rje()<<rji(leaf);
	
	for (int i = 0; i < 100007; i++) vis[i] = false;

	vector<int> chars(130);
	rje()<<rji(labels);
	// chars[(int)labels[0]] = 5555;
	// cerr<< chars[97]<<endl;
	
	// dfs(3, chars);
	// rje()<<rji(out);


	out.resize(n);
	for (int X: leaf) {
		flg = false;

		dfs(X, chars);
		rje()<<X<<rji(out);
	}

	for (int &X: out) X++;
}