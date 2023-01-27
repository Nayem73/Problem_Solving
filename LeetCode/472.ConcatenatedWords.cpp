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
	vector<string> words {
		// "cat","dog","catdog"
		"cat","cats","catsdogcats","dog","dogcatsdog","hippopotamuses","rat","ratcatdogcat"
	};

	vector<string> ans;
	// map<string, int> st;
	set<string> st;
	for (string s: words) {
		st.insert(s);
	}
	rje()<<rji(st);

	for (string x: words) {
		int n = x.size();
		vector<bool> vis(n);

		st.erase(x);
		for (int len = 1; len <= n; len++) {
			for (int i = 0; i < n; i++) {
				if (i+len-1 >= n) break;

				string s = x.substr(i, len);
				if (st.find(s) != st.end()) {
					for (int tt = i; tt <= i+len-1; tt++) {
						vis[tt] = true;
					}
				}
			}
		}
		st.insert(x);

		bool flg = true;
		for (int i = 0; i < n; i++) {
			if (!vis[i]) {
				flg = false; break;
			}
		}

		if (flg) {
			ans.push_back(x);
		}

	}
	rje()<<rji(ans);
}