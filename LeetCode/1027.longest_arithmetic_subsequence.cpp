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
	// vector<int> nums{3,6,9,12};
	// vector<int> nums{3,4,7,10};
	vector<int> nums{83,20,17,43,52,78,68,45};
	int n = nums.size();
	const int biggest_dif = 83;
	
	vector<vector<int>> dp(n, vector<int> (biggest_dif, 1));
	vector<vector<int>> dp_neg(n, vector<int> (biggest_dif, 1));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < biggest_dif; j++) {
				if (i) {
					dp[i][j] = max(dp[i][j], dp[i-1][j]);
					dp_neg[i][j] = max(dp_neg[i][j], dp_neg[i-1][j]);
				}
		}

		for (int j = i+1; j < n; j++) {
			int dif = nums[j] - nums[i];
			if (dif >= 0) {
				// dp[j][dif] += dp[i][dif];
				dp[j][dif] = max(dp[j][dif], dp[i][dif] + 1);
			}
			else {
				dif *= -1;
				// dp_neg[j][dif] += dp_neg[i][dif];
				dp_neg[j][dif] = max(dp_neg[j][dif], dp_neg[i][dif] + 1);
			}
		}


	}

	// rje()<<rji(dp);
	int mx = 2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < biggest_dif; j++) {
			rje()<< i << ' '<<j << rji(dp[i][j]) rji(dp_neg[i][j]);
			mx = max({mx, dp[i][j], dp_neg[i][j]});
		}
	}

	rje()<<rji(mx);

}

// 3 4 7 10
//   1 4 7
//     3 3


// 4 7 11 10
//   3    6
//   1   3
//        -1