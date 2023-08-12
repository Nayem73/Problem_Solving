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
	vector<int> nums{1,0,1,1,1}; int target = 0;
	// vector<int> nums{4,5,1}; int target = 0;

	int n = nums.size();

	int lo = 0, hi = n-1;
	int break_point = 0;
	while (lo <= hi) {
		int mid = (lo+hi)/2;
		if (nums[mid] >= nums[break_point]) {
			break_point = mid;
			lo = mid+1;
		} else {
			hi = mid-1;
		}
	}

	rje()<< rji(break_point);

	lo = 0, hi = break_point;
	int got = -1;
	while (lo <= hi) {
		int mid = (lo+hi)/2;
		if (nums[mid] <= target) {
			got = mid;
			lo = mid+1;
		} else {
			hi = mid-1;
		}
	}
	rje()<<rji(got);
	if (got != -1 && nums[got] == target) {cout << "found at "<< got << endl; return 0;}

	lo = break_point + 1, hi = n-1;
	got = -1;
	while (lo <= hi) {
		int mid = (lo+hi)/2;
		if (nums[mid] <= target) {
			got = mid;
			lo = mid+1;
		} else {
			hi = mid-1;
		}
	}

	rje()<<rji(got);

	if (got != -1 && nums[got] == target) {cout << "found at "<< got << endl; return 0;}

}