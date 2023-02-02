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
#define return cerr<<

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
	// if (words.size() == 1) return true;
	vector<string> words{
		"hello",
		"leetcode"
	};
	string order = "hlabcdefgijkmnopqrstuvwxyz";
	vector<int> Order(130);
	for (int i = 0; i < (int)order.size(); i++) {
		Order[order[i]] = i;
	}

	for (int i = 1; i < (int)words.size(); i++) {
		string s = words[i-1];
		string t = words[i];
		int n = s.size(), m = t.size();
		bool flg = false;
		for (int j = 0; j < min(n, m); j++) {
			if (s[j]==t[j]) continue;
			if (Order[s[j]] > Order[t[j]]) {return false; rje()<<rji(j);}
			else {
				flg = true; break;
			}

		}
		if (flg) continue;
		if (n > m) return false;
	}

	return true;
}