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

vector<int> dirx{+1, -1, +0, +0, -1, +1, -1, +1};
vector<int> diry{+0, +0, +1, -1, +1, +1, -1, -1};

int ans = 0;

void traverse(vector<vector<int>> &grid, vector<vector<bool>> &vis, int curx, int cury, int n) {
if (curx>=0 && cury>=0) {

	if (vis[curx][cury]) {
		return;
	}

	grid[curx][cury] = 1;

	vis[curx][cury] = true;

	for (int i = 0; i < n; i++) {
		vis[curx][i] = true;
		vis[i][cury] = true;
	}

	int x = curx, y = cury;
	while (x >= 0 && y >= 0 && x < n && y < n) {
		vis[x][y] = true;
		x--;
		y++;
	}

	x = curx, y = cury;
	while (x >= 0 && y >= 0 && x < n && y < n) {
		vis[x][y] = true;
		x++;
		y++;
	}

	x = curx, y = cury;
	while (x >= 0 && y >= 0 && x < n && y < n) {
		vis[x][y] = true;
		x--;
		y--;
	}

	x = curx, y = cury;
	while (x >= 0 && y >= 0 && x < n && y < n) {
		vis[x][y] = true;
		x++;
		y--;
	}


	if (curx == n-1) {
		ans++;
		rje()<<rji(ans);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cerr << grid[i][j];
			}
			cerr<<endl;
		}
		cerr<<endl;

		return;
	}

	cout << curx << ' '<< cury << endl;
}
	for (int i = curx; i < n; i++) {
		for (int j = cury+1; j < n; j++) {
			traverse(grid, vis, i, j, n);
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
	int n = 4;
	vector<vector<int>> grid (n, vector<int> (n));
	vector<vector<bool>> vis (n, vector<bool> (n));

	traverse(grid, vis, -1, -1, n);

	rje()<<rji(ans);
}