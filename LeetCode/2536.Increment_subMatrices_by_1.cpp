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
	// vector<int> nums = {1,15,6,3};
int n = 3; vector<vector<int>> queries{
	{1,1,2,2},
	{0,0,1,1}
};

vector<vector<int>> mat(n, vector<int> (n));
	for (auto &x: queries) {
		int s1 = x[0], s2 = x[2];
		int t1 = x[1], t2 = x[3];
		for (int i = s1; i <= s2; i++) {
			mat[i][t1]++;
			if (t2+1 < n) mat[i][t2+1]--;
		}
		for (auto x: mat) {
			rje()<<x;
		}
			cerr<<endl;
	}

	for (auto x: mat) {
		rje()<<x;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			mat[i][j] += mat[i][j-1];
		}
	}

	for (auto x: mat) {
		rje()<<x;
	}
}

// 1 ... 5 r
// 0 ... 3 r
// 2 ... 6 r


// 1 ... 5 c

// 0 ... 3 c
