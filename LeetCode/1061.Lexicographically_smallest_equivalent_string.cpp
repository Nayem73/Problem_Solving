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
vector<bool> vis(130);
char best = 'z';

void dfs(int cur, vector<char> s[]) {
	vis[cur] = true;
	best = min(best, (char)cur);
	for (int X: s[cur]) {
		if (vis[X]) continue;
		dfs(X, s);
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
	// string s1 = "parker", s2 = "morris";
	// string baseStr = "parser";	
	string s1 = "leetcode", s2 = "programs";
	string baseStr = "sourcecode";

	vector<char> s[130];
	for (int i = 0; i < (int)s1.size(); i++) {
		
		s[ s1[i] ].push_back(s2[i]);
		s[ s1[i] ].push_back(s1[i]);


		s[ s2[i] ].push_back(s1[i]);
		s[ s2[i] ].push_back(s2[i]);
	}

	for (int i = 97; i <= 122; i++) {
		sort(s[i].begin(), s[i].end());
		if (s[i].size()) rje()<<(char)i<<rji(s[i]);
	}
	
	string out;
	for (char X: baseStr) {
		for (int i = 97; i <= 122; i++) vis[i] = 0;
		if (s[X].empty()) out += X;
		// else out += s[X][0];
		else {
			best = s[X][0];
			dfs(s[X][0], s);
			out += best;
		}
	}
	cerr<< out << endl;

	rje()<<rji(s['s']);
}