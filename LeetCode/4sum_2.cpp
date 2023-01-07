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
	vector<int> nums1{0,1,-1};
	vector<int> nums2{-1,1,0};
	vector<int> nums3{0,0,1};
	vector<int> nums4{-1,1,1};
	sort(nums4.begin(), nums4.end());
	int cnt = 0;

  for (int x: nums1) {
    for (int y: nums2) {
        for (int z: nums3) {
            int sum = x+y+z;
            auto tmp = lower_bound(nums4.begin(), nums4.end(), -sum);
            if (tmp != nums4.end() && sum + *tmp == 0) {
            	// cnt++;
            	cnt += upper_bound(nums4.begin(), nums4.end(), -sum) - lower_bound(nums4.begin(), nums4.end(), -sum);
            	cerr << x << ' '<< y << ' '<<z <<' '<< *tmp << endl;
            }
        }
    }
	}

cerr<<cnt << endl;

}