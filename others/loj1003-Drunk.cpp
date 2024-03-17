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
	const int LIMIT = 10000;
	int t, tc = 0; cin >> t; while (t--) {
		int n; cin >> n;
		vector<int> adj[LIMIT+1];
		vector<int> indegree(LIMIT+1);
		map<string, int> mp;
		int curKey = 0;
		for (int i = 0; i < n; i++) {
			string a, b; cin >> a >> b;
			if (mp.find(a) == mp.end()) {
				mp[a] = curKey;
				curKey++;
			}
			if (mp.find(b) == mp.end()) {
				mp[b] = curKey;
				curKey++;
			}

			int u = mp[a], v = mp[b];
			adj[u].push_back(v);
			indegree[v]++;
		}

		queue<int> q;
		for (int i = 0; i < curKey; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}

		while (!q.empty()) {
			int curNode = q.front();
			q.pop();
			for (int toNode : adj[curNode]) {
				indegree[toNode]--;
				if (indegree[toNode] == 0) {
					q.push(toNode);
				}
			}
		}

		bool isNo = false;
		for (int i = 0; i < curKey; i++) {
			if (indegree[i] != 0) {
				isNo = true;
			}
		}
		if (isNo) cout << "Case "<< ++tc << ": "<< "No\n";
		else cout << "Case "<< ++tc << ": "<< "Yes\n";
	}
}