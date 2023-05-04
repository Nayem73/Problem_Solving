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
vector<int> adj[500];
// vector<bool> vis(500);// no need cz tree

void dfs(int pos, vector<int>& ancestors1, vector<int>& ancestors2, int one_or_two) {
	rje()<<rji(pos);
	if (one_or_two==1) ancestors1.push_back(pos);
	else ancestors2.push_back(pos);
	
	for (int to : adj[pos]) {
		dfs(to, ancestors1, ancestors2, one_or_two);
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
	int edge; cin >> edge;
	int id = 0;
	map<char,int> mp;
	////////////
	/// another soulution is that we need to get the 2 descendants in the same level
	///	and taile ekshathe uporer dike agabo and dekhbo same node e ashte parlam kina.
	/// this was algoExpert idea, simple Alhamdulillah
	///////////

	for (int i = 0; i < edge; i++) {
		char u, v;
		cin >> u >> v;
		if (mp.find(u) == mp.end()) {
			mp[u] = id++;
		}
		if (mp.find(v) == mp.end()) {
			mp[v] = id++;
		}
		// adj[mp[u]].push_back(mp[v]);
		adj[mp[v]].push_back(mp[u]); //i will go upwards so this.
	}

	//total number of nodes = id - 1;

	char st1 = 'I', st2 = 'T'; // two start position to find their Y.Common Ancestor
	vector<int> ancestors1;
	vector<int> ancestors2;
	rje()<<rji(mp['B']) rji(mp[st1]);
	
	dfs(mp[st1], ancestors1, ancestors2, 1);
	// return 0;
	dfs(mp[st2], ancestors1, ancestors2, 2);

	sort(ancestors1.rbegin(), ancestors1.rend());
	sort(ancestors2.begin(), ancestors2.end());

	int ans = -1;
	for (auto X: ancestors1) { // finding the common biggest element (biggest = youngest ancestor here)
		auto it = lower_bound(ancestors2.begin(), ancestors2.end(), X);
		if (it != ancestors2.end()) {
			if (*it == X) {
				ans = X;
				break;
			}
		}
	}

	rje()<<rji(ans);

	sort(ancestors2.rbegin(), ancestors2.rend());
	rje()<<rji(ancestors1);
	rje()<<rji(ancestors2);
}