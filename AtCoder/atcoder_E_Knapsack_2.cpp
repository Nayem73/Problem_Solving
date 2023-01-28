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
	int n, capacity; cin>>n>>capacity;
	vector<int> weight(n), value(n);
	for (int i = 0; i < n; i++) {
		cin >> weight[i] >> value[i];
	}

	const long long inf = 9e18L;
	vector<long long> dp(100007, inf);
	dp[0] = 0;

	for (int i = 0; i < n; i++) {
		for (int cost = 1e5; cost >= 1; cost--) {
			int curCost = value[i];
			int curWeight = weight[i];
			if (cost-curCost < 0) continue;
			dp[cost] = min(dp[cost], dp[cost-curCost] + curWeight);
		}
	}
	for (int cost = 1e5; cost >= 1; cost--) {
		if (dp[cost] != inf && dp[cost] <= capacity) {
			cout << cost << endl;
			break;
		}
	}
}