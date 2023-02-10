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
vector<int> dirx{0,0,1,-1};
vector<int> diry{1,-1,0,0};
int got = 2e9;
vector<vector<bool>> vis(103, vector<bool> (103));

void dist(vector<vector<int>> &grid, int n, int x, int y, int orgx, int orgy) {
	for (int i = 0; i < 4; i++) {
		int tox = dirx[i] + x;
		int toy = diry[i] + y;
		if (tox < 0 || tox >= n || toy < 0 || toy >= n) continue;
		if (vis[tox][toy]) continue;

		// dist[tox][toy] = min(dist[tox][toy], dist[x][y] + abs(x-tox)+abs(y-toy));
		if (grid[tox][toy] == 1) got = min(got, abs(orgx-tox)+abs(orgy-toy));
		vis[tox][toy] = true;
		dist(grid, n, tox, toy, orgx, orgy);
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
	vector<vector<int>> grid{
		// {1,0,0},
		// {0,0,0},
		// {0,0,0}
		{1,0,1},
		{0,0,0},
		{1,0,1}
	};


	int n = grid.size();
	int ans = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == 0) {
				for (int x = 0; x < 103; x++) for (int y = 0; y < 103; y++) vis[x][y] = 0;
				got = 2e9;

				dist(grid, n, i, j, i, j);
				ans = max(ans, got);
			}
		}
	}

	rje()<<rji(ans);
}