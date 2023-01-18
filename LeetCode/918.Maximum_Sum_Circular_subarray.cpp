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
	vector<int> nums{5,-3,5};
	int n = nums.size();
	vector<int> dp(n*2);
	dp[0] = nums[0];

	int lo = 0;
	for (int i = 1; i < n; i++) {
		if (nums[i] + dp[i-1] > nums[i]) dp[i] = nums[i] + dp[i-1];
		else dp[i] = nums[i], lo = i;
		rje()<<rji(lo)<<" "<<nums[i]<<": "<<rji(dp);
	}
	int ans = nums[0];
	for (int i = 0; i < n; i++) ans = max(ans, dp[i]);

	rje()<< "---------------\n";
	for (int i = 0; i < n; i++) {
		int j = n+i;
		if (i == lo) {
			lo++;
			if (lo == n) break;
			dp[j-1] -= nums[lo];
		}
		// if (nums[i] + dp[j-1] > nums[i]) 
			dp[j] = nums[i] + dp[j-1];
		// else {}
		rje()<<nums[i]<<": "<<rji(dp);
	}
	for (int i = 0; i < n*2; i++) ans = max(ans, dp[i]);
	

}