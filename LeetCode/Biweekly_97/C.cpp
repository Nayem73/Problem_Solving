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
	vector<int> s{1,1,2,2,3,3,5}; int k = 2;
	// vector<int> s{1,2,3,4}; int k = 0;
	// vector<int> s{1,1,5,6,7,7,7,9}; int k = 3;
	int n = s.size();
	map<int,int> vis;
	// vector<pair<int,pair<int,int>>> ans;
	vector<pair<pair<int,int>, int>> ans;
	for (int i = 0; i < n; i++) {
		int lo = s[i];
		int hi = lo+k;
		int got = lower_bound(s.begin(), s.end(), hi+1) - lower_bound(s.begin(), s.end(), lo);
		rje()<<rji(lo) rji(hi) rji(got);
		// ans.push_back({got, {lo, hi}});
		ans.push_back({{lo,hi}, got});
	}
	rje()<<rji(ans);
	vector<int> ber;

	int lst = 0;
	for (int i = 0; i< n; i++) {
		auto x = ans[i];
		if (x.first.first > lst) {
			ber.push_back(x.second);
			lst = x.first.second;
		}
	}

sort(ber.rbegin(), ber.rend());
rje()<<rji(ber);


}