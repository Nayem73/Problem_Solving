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
	vector<int> matrix{
		{1,4,7,12,15,1000},
		{2,5,19,31,32,1001},
		{3,8,24,33,35,1002},
		{40,41,42,44,45,1003},
		{99,100,103,106,128,1004}
	};

	int n = matrix.size(), m = matrix[0].size();
	int target = 44;

	int rowLow = 0, colLow = 0, rowHi = n-1, colHi = m-1;
	int got = -1;
	int cnt = 100;
	while (true) {
		if (!cnt--) break;
		int rowMid = (rowLow + rowHi) / 2;
		int colMid = (colLow + colHi) / 2;
		if (matrix[rowMid][colMid] <= target) {
			got = matrix[rowMid][colMid];
			collow = colMid + 1;
		} else {
			colHi = colMid - 1;
			if (colHi < 0) {
				colHi = m-1;
				colLo = 0;
				rowLo--;
			}
		}
	}
}