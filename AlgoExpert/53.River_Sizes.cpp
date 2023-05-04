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
const int nax = 500;
vector<vector<bool>> vis(nax, vector<bool> (nax,0));
int tmp_ans = 0;
vector<int> dirx{0,0,1,-1};
vector<int> diry{1,-1,0,0};

void dfs(int x, int y, vector<vector<int>> &grid) {
	int n = grid.size(), m = grid[0].size();
	//rje()<<rji(x) rji(y);
	for (int i = 0; i < 4; i++) {
		int tox = x + dirx[i];
		int toy = y + diry[i];

		if (tox >= n || tox < 0 || toy >= m || toy < 0) continue;

		if (grid[tox][toy] != 1) continue;
		if (vis[tox][toy]) continue;

		vis[tox][toy] = true;
		tmp_ans++;
		dfs(tox, toy, grid);
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
	// 	{1,0,0,1,0},
	// 	{0,0,1,0,0},
	// 	{0,1,1,0,1},
	// 	{1,0,1,0,1},
	// 	{1,0,1,1,0}
	// };

	vector<vector<int>> grid {
		{1,0,0,1,0},
		{1,0,1,0,0},
		{0,0,1,0,1},
		{1,0,1,0,1},
		{1,0,1,1,0}
	};

	int n = grid.size();
	int m = grid[0].size();
	vector<int> out;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] == 1 && !vis[i][j]) {
				tmp_ans = 0;
				vis[i][j] = true;
				//local vis array isn't necessary. global vis is good enough Alhamdulillah
				dfs(i,j, grid);
				out.push_back(tmp_ans+1);
				// rje()<<rji(out);
				// return 0;
			}
		}
	}

	rje()<<rji(out);
}