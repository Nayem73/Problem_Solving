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
int cnt = 1;

void print(vector<vector<int>>& grid) {
	int n = grid.size();
	for (int i = 0; i < n; i++) {
		rje()<< grid[i];
	}
}

void fnc(int row, int col, int n, vector<vector<int>>& grid) {
	if (n == 1) {
		grid[row][col] = cnt;
		return;
	}

	for (int j = col; j < col+n; j++) {
		grid[row][j] = cnt++;
	}

	for (int i = row+1; i < row+n-1; i++) {
		grid[i][col+n-1] = cnt++;
	}
	// if (cnt >= 17) rje()<< rji("iiiiiiiiiiiiii");

	for (int j = col+n-1; j >= col; j--) {
		grid[row+n-1][j] = cnt++;
	}

	for (int i = row+n-1-1; i > row; i--) {
		grid[i][col] = cnt++;
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
	// int n = 3;
	// int t = n/2;
	// int cnt = 0;
	// while (t--) {
	// 	for (int i = 0; i <)
	// }

	int n = 5;
	vector<vector<int>> grid(n, vector<int> (n, 0));
	
	// fnc(1, 1, 1, grid);
	int tmp_n = n;
	for (int i = 0; i < n; i++) {
		fnc(i, i, tmp_n, grid);
		tmp_n -= 2;
		print(grid);
		rje()<<rji(tmp_n);
		if (tmp_n <= 0) break;
	}

	print(grid);
}