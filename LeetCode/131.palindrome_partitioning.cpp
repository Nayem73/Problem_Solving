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

bool isPal(string s) {
	int lo = 0, hi = s.size()-1;
	while (lo < hi) {
		if (s[lo] != s[hi]) return false;
		lo++; hi--;
	}
	return true;
}
vector<vector<string>> out;

void bt(string cur, vector<string> ans, int s_sz) {
	// if (isPal(cur)) {
		int cntChar = 0;
		for (auto X: ans) cntChar += X.size();
		if (cntChar == s_sz) {
			out.push_back(ans);
			rje()<< ans;
		}
	// }
	int n = cur.size();
	for (int i = 0; i < n; i++) {
		string lo = cur.substr(0, i+1);
		string hi = cur.substr(i+1, n-1-i);
		if (!isPal(lo)) continue;
		ans.push_back(lo);
		bt(hi, ans, s_sz);
		ans.pop_back();
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
	string s = "aab";
	bt(s, {}, s.size());
}