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
	vector<int> nums1{1,2,3};
	vector<int> nums2{2,4,6};

	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());

	set<int> tmp;
	for (int X: nums1) {
		auto got = lower_bound(nums2.begin(), nums2.end(), X);
		if (got == nums2.end()) tmp.insert(X);
		else if (*got != X) tmp.insert(X);
	}

	vector<vector<int>> out(2);
	for (int X: tmp) out[0].push_back(X);
	// out.push_back(tmp);

	tmp.clear();
	for (int X: nums2) {
		auto got = lower_bound(nums1.begin(), nums1.end(), X);
		if (got == nums1.end()) tmp.insert(X);
		else if (*got != X) tmp.insert(X);
	}

	for (int X: tmp) out[1].push_back(X);

	for (auto X: out) rje()<<rji(X);
}