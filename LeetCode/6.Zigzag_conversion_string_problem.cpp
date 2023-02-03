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

void pr(vector<vector<int>> &grid, int numRows) {
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < 10; j++) {
			cerr << (char)grid[i][j];
		}
		cerr <<endl;
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
	string s = "Apalindromeisawordphr"; int numRows = 3;
	int col = 1003;
	vector<vector<int>> grid(numRows, vector<int> (col));
	// pr(grid, numRows);
	// return 0;

	bool flg = true;
	int cnt = 0;
	int j = 0, k = 0;
	rje()<<rji(s);
	int odd = -1;
	while (true) {
		++odd;
		if (odd%2) {
			k = j;
			for (int i = numRows-2; i >= 1; i--) {
				grid[i][k++] = s[cnt++];
				rje()<<i << ' '<<k-1<<rji(cnt-1)<<rji(s[cnt-1]) rji((char)grid[i][k-1]);
				if (cnt == (int)s.size()) {
					flg = false; break;
				}
			}
			// pr(grid, numRows);
			// return 0;
			if (!flg) break;
			continue;
		}

		j = k;
		for (int i = 0; i < numRows; i++) {
			rje()<<rji("---- ")<<i << ' '<<j << rji(cnt) rji((char)s[cnt]);
			grid[i][j] = s[cnt++];
			if (cnt == (int)s.size()) {
					flg = false; break;
				} 
		}
		j++;
		if (!flg) break;
	}

	// rje()<<rji(grid[0]);
	string out;
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < col; j++) {
			if (grid[i][j] == 0) cerr << ' ';
			else cerr << (char)grid[i][j], out+=grid[i][j];
		}
		cerr <<endl;
	}

	rje()<<rji(out);
}