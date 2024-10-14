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
int dp[55][55][55];

string s1, s2, s3;
int lcs(int i, int j,int k) {
	if(i == -1 || j ==-1 || k==-1) {
		return 0;
	}
		
	if(dp[i][j][k] != -1) {
		return dp[i][j][k];
	}
		
	
	if(s1[i]==s2[j] && s2[j]==s3[k]) {
		dp[i][j][k] = lcs(i-1, j-1, k-1) + 1;
		return dp[i][j][k];
	} else {
		dp[i][j][k] = max(max(lcs(i-1, j, k), lcs(i, j-1, k)), lcs(i, j, k-1));
		return dp[i][j][k];
	}	
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
	int t; cin >> t;
	int tc = 0;
	while (t--) {
		cin >> s1 >> s2 >> s3;
		memset(dp, -1,sizeof(dp));
		int l1 = s1.length(); 
		int l2 = s2.length(); 
		int l3 = s3.length(); 

		int len = lcs(l1-1,l2-1,l3-1);
		cout << "Case " << ++tc <<": "<<len <<endl;

	}
}

