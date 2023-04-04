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

bool bs(int mid, string &s) {
	int n = s.size();
	map<char, int> mp;
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		if (!mp.empty() && mp.find(s[i]) != mp.end()) {
			mp.clear();
			mp[s[i]]++;
			cnt++;
		}
		else mp[s[i]]++;
	}
	if (cnt <= mid) return true;
	return false;
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
	// string s = "abacaba";
	string s = "ssssss";
	int lo = 1, hi = s.size();
	int got = 1;

	while (lo <= hi) {
		int mid = (lo+hi)/2;
		if (bs(mid, s)) {
			got = mid;
			hi = mid - 1;
		}
		else lo = mid+1;
	}

	cerr << got << endl;
}