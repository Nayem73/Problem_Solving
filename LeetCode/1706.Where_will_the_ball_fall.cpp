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
int flg = -1;

void dfs(int curx, int cury, int row, int col, vector<vector<int>>& grid) {
	//boundary check
	if (grid[curx][cury] == 1 && cury+1 >= col) {
		// flg = false;
		return;
	}
	else if (grid[curx][cury] == -1 && cury-1 < 0) {
		// flg = false;
		return;
	}

	//now v shape check
	if (grid[curx][cury] == 1 && grid[curx][cury+1] == -1) return;
	else if (grid[curx][cury] == -1 && grid[curx][cury-1] == 1) return;

	rje()<<rji(curx)rji(cury);

	if (grid[curx][cury] == 1) {
		curx += 1; cury += 1;
		if (curx == row) {
			// flg = true;
			flg = cury;
			return;
		}
		if (curx < row && cury < col) {
			dfs(curx, cury, row, col, grid);
		}
	}
	else {
		curx += 1; cury -= 1;
		if (curx == row) {
			// flg = true;
			flg = cury;
			return;
		}
		if (curx < row && cury >= 0) {
			dfs(curx, cury, row, col, grid);
		}
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
	// vector<vector<int>> grid {
	// 	{1,1,1,-1,-1},
	// 	{1,1,1,-1,-1},
	// 	{-1,-1,-1,1,1},
	// 	{1,1,1,1,-1},
	// 	{-1,-1,-1,-1,-1}
	// };
		vector<vector<int>> grid {
			{1,1,1,1,1,1},
			{-1,-1,-1,-1,-1,-1},
			{1,1,1,1,1,1},
			{-1,-1,-1,-1,-1,-1}
	};


	int row = grid.size(), col = grid[0].size();
	dfs(0,4, row, col, grid);
	rje()<<rji(flg);
}