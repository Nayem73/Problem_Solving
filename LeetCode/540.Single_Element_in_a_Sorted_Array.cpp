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
	// vector<int> nums{1,1,2,3,3,4,4,8,8};
	vector<int> nums{3,3,7,7,10,10,11,12};
	int n = nums.size();
	if (n==1) return nums[0];
	int lo = 0, hi = n-1;
	int got = -1;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (mid%2 == 0) {
			
			if (mid != n-1 && nums[mid] == nums[mid+1]) lo = mid+2;
			else if (mid != 0 && nums[mid] == nums[mid-1]) hi = mid-2;
			else {
				got = nums[mid];
				break;
			}

			rje()<<rji(nums[mid]) rji(mid) rji(lo) rji(hi);
		}
		if (mid%2 == 1) {
			if (nums[mid-1] == nums[mid]) lo = mid+1;
			else hi = mid - 1;
			rje()<<rji(nums[mid]) rji(mid) rji(lo) rji(hi);
		}
	}

	rje()<< rji(got);
}


// 0 1 2 3 4 5 6 7 8
// 1 1 2 3 3 4 4 8 8