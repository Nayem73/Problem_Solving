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

vector<int> dirx{1, -1, 0, 0};
vector<int> diry{0, 0, 1, -1};
const int limit = 250;
int k = 0, v = 0;

vector<vector<bool>> vis(limit+1, vector<bool> (limit+1));

void dfs(int curx, int cury, int n, int m, vector<string>& grid) {
	vis[curx][cury] = true;
	if (grid[curx][cury] == 'k') k++;
	if (grid[curx][cury] == 'v') v++;

	for (int i = 0; i < 4; i++) {
		int tox = curx + dirx[i];
		int toy = cury + diry[i];
		if (tox < 0 || toy < 0 || tox >= n || toy >= m) continue;
		if (vis[tox][toy]) continue;
		if (grid[tox][toy] == '#') continue;
		dfs(tox, toy, n, m, grid);
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
	int n, m; cin>>n>>m;
	vector<string> grid(n);
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		grid[i] = s;
	}

	int totalK = 0, totalV = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!vis[i][j] && grid[i][j] != '#') {
				dfs(i, j, n, m, grid);
				//rje()<<i<<' '<<j<<": "<<rji(k)rji(v);
				if (v >= k) k = 0;
				else v = 0;
				totalK += k;
				totalV += v;
				k = 0; v = 0;
			}
		}
	}
	cout << totalK << ' '<< totalV << endl;
}