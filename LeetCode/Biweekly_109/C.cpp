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
	// vector<long long> nums{2,3,6,1,9,2}; long long x = 5;
	vector<long long> nums{8,50,65,85,8,73,55,50,29,95,5,68,52,79}; long long x = 74;
	long long n = nums.size();

	vector<vector<long long>> dp(n, vector<long long> (2));
	if (nums[0]%2==0)
		dp[0][0] = nums[0]; ///pblm
	else dp[0][1] = nums[0];


	for (long long i = 1; i < n; i++) {
		// if (nums[i] % 2 == 0) {
  //       dp[i][0] = max(dp[i - 1][0], dp[i - 1][1]) + nums[i];
  //       dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + nums[i] - x);
  //   }
    
  //   else {
  //       dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + nums[i] - x);
  //       dp[i][1] = max(dp[i - 1][1] + nums[i], dp[i - 1][0]);
  //   }

    if (nums[i]%2==0) {
    	dp[i][0] = max(dp[i-1][0]+nums[i], dp[i-1][1]+nums[i]-x);
    	// dp[i][1] = max(dp[i-1][1], dp[i-1][0]);
    	dp[i][1] = dp[i-1][1];
    }
    else {
    	dp[i][1] = max(dp[i-1][1]+nums[i], dp[i-1][0]+nums[i]-x);	
    	dp[i][0] = dp[i-1][0];
    	// dp[i][1] = max(dp[i-1][1], dp[i-1][0]);
    }


    rje()<<nums[i]<<": "<< dp[i][0] << ' '<<dp[i][1];


	}

	cerr << max(dp[n-1][0], dp[n-1][1]);

}