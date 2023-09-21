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

void tc() {
	int n = 10;
	string s[10];
	for (int i= 0 ; i < 10; i++) {
		string tmp; cin >> tmp;
		s[i] = tmp;
		rje()<<rji(s[i]);
	}

	vector<vector<int>> grid(10, vector<int> (10, 0));

	for (int i = 0; i < 10; i++) {
		grid[0][i] = 1;
		grid[n-1][i] = 1;
		grid[i][0] = 1;
		grid[i][n-1] = 1;
	}

	for (int i = 1; i < 9; i++) {
		grid[1][i] = 2;
		grid[8][i] = 2;
		grid[i][1] = 2;
		grid[i][8] = 2;
	}

	for (int i = 2; i < 8; i++) {
		grid[2][i] = 3;
		grid[7][i] = 3;
		grid[i][2] = 3;
		grid[i][7] = 3;
	}

	for (int i = 3; i < 7; i++) {
		grid[3][i] = 4;
		grid[6][i] = 4;
		grid[i][3] = 4;
		grid[i][6] = 4;
	}

	for (int i = 4; i < 6; i++) {
		grid[4][i] = 5;
		grid[5][i] = 5;
		grid[i][4] = 5;
		grid[i][5] = 5;
	}



	for (int i = 0; i < n; i++) {
	rje()<< grid[i];
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (s[i][j] == 'X') ans += grid[i][j];
		}
	}
	cout << ans << endl;
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
	int t; cin >> t; while (t--) {
		tc();
	}
}