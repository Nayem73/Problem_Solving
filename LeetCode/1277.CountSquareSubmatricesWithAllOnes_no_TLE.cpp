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
	vector<vector<int>> mat {
		// {0,1,1,1},
		// {1,1,1,1},
		// {0,1,1,1},
		// {1,0,1},
		// {1,1,0},
		// {1,1,0}
		{1,1,1,1},
		{1,1,1,0},
		{1,1,1,1},
		{1,1,1,1}
	};

	int n = mat.size(), m = mat[0].size();
	vector<vector<int>> square_col(n, vector<int> (m));
	vector<vector<int>> square(n, vector<int> (m));

	for (int j = 0; j < m; j++) {
		int track = 0;
		for (int i = 0; i < n; i++) {
			
			if (!mat[i][j]) track = 0;
			else ++track;

			square_col[i][j] = track;

		}
	}

	for (auto X: square_col) {
		for (auto Y: X) {
			cerr << Y << ' ';
		}
		cerr << endl;
	}

	for (int i = 0; i < n; i++) {
		int track = 0;
		for (int j = 0; j < m; j++) {
			if (!mat[i][j]) {
				track = 0;
				continue;
			}
			else ++track;
			square[i][j] = min({(i&&j?square[i-1][j-1] + 1 :1), square_col[i][j], track});
			square[i][j] = max(square[i][j], 1);
		}
	}

	long long ans = 0;
	for (auto X: square) {
		for (auto Y: X) {
			cerr << Y << ' ';
			ans += Y;
		}
		cerr << endl;
	}

	rje()<<rji(ans);
}