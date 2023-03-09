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
	vector<pair<string, string>> in{
		{"A", "B"},
		{"A", "C"},
		{"A", "D"},
		{"B", "E"},
		{"B", "F"},
		{"D", "G"},
		{"D", "H"},
		{"F", "I"},
		{"F", "J"},
		{"G", "K"}
	};

	int n = in.size();
	vector<int> adj[100];

	map<string,int> mp;
	map<int, string> for_output;
	int cnt = 0;
	for (auto X: in) {
		int u, v;
		if (mp.find(X.first) == mp.end()) {
			u = cnt;
			mp[X.first] = cnt;
			for_output[cnt] = X.first;
			cnt++;
		}
		else u = mp[X.first];

		if (mp.find(X.second) == mp.end()) {
			v = cnt;
			mp[X.second] = cnt;
			for_output[cnt] = X.second;
			cnt++;
		}
		else v = mp[X.second];

		adj[u].push_back(v);
	}

	for (int i = 0; i < n; i++) {
		if (adj[i].empty()) continue;
		cerr << i << "->\n";
		for (auto Y: adj[i]) {
			cerr << Y << ' ';
		}
		cerr << endl<<endl;
	}


	queue<int> q;
	vector<bool> vis(100);
	q.push(0);
	string ans;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		cerr << cur << ' ';
		ans += for_output[cur];
		for (int to: adj[cur]) {
			if (vis[to]) continue;
			vis[to] = true;
			q.push(to);
		}
	}

	rje()<<rji(ans);
}