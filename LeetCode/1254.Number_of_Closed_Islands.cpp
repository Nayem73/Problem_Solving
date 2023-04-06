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
const int nax = 103;

vector<vector<bool>> vis(nax, vector<bool> (nax, 0));
vector<vector<bool>> gvis(nax, vector<bool> (nax, 0));
vector<int> dirx{1,-1, 0,  0};
vector<int> diry{0, 0, 1, -1};

void dfs(int x, int y, vector<vector<int>> &grid, int n, int m) {
	vis[x][y] = true;
	gvis[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int tox = x + dirx[i];
		int toy = y + diry[i];

		if (tox-1 < 0 || toy-1 < 0 || tox+1 >= n || toy+1 >= m) continue;
		if (vis[tox][toy]) continue;
		if (grid[tox][toy] == 1) continue;
		vis[tox][toy] = true;
		gvis[tox][toy] = true;
		dfs(tox, toy, grid, n, m);
	}
}

bool chk(int n, int m) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vis[i][j]) {
				// cout << i << ' '<< j << endl;
				if (i-1 < 0 || j-1 < 0 || i+1 >= n || j+1 >= m) return false;
			}
		}
	}

	return true;
}

void vis_clr() {
	for (int i = 0; i < nax; i++) {
		for (int j = 0; j < nax; j++) {
			vis[i][j] = false;
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
	vector<vector<int>> grid {
		 {1,1,1,1,1,1,1},
	   {1,0,0,0,0,0,1},
	   {1,0,1,1,1,0,1},
	   {1,0,1,0,1,0,1},
	   {1,0,1,1,1,0,1},
	   {1,0,0,0,0,0,1},
	   {1,1,1,1,1,1,1}
	};

	int ans = 0;

	int n = grid.size(), m = grid[0].size();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] == 0 && !gvis[i][j]) {
				dfs(i,j, grid, n, m);
				// rje()<<rji(vis[0]);
				if (chk(n, m)) {
					 ans++;
					 // rje()<<rji(i)rji(j);
					 // return 0;
				}
				vis_clr();
			}
		}
	}

	cerr << ans << endl;
}