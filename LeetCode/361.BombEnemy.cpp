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
	string grid[] = {
		"0E00",
		"E0WE",
		"0W00",
		"0E00"
	};

	int n = grid.size(), m = grid[0].size();
	vector<vector<int>> row(n, vector<int> (m));
	vector<vector<int>> col(n, vector<int> (m));

	for (int i = 0; i < n; i++) {
		int cnt = 0;
		vector<int> pref(m);
		vector<int> suff(m);
		for (int j = 0; j < m; j++) {
			if (grid[i][j] == 'E') cnt++;
			else if (grid[i][j] == 'W') cnt = 0;
			pref[i] = cnt;
		}
		cnt = 0;
		for (int j = m-1; j >= 0; j--) {
			if (grid[i][j] == 'E') cnt++;
			else if (grid[i][j] == 'W') cnt = 0;
			suff[i] = cnt;
		}

		for (int j = 0; j < m; j++) {
			
		}
	}

	for (string X: grid) {
		rje()<<rji(X);
	}
}