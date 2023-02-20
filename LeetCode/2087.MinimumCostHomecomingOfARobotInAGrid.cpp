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
vector<int> dirx{1, 0, -1, 0};
vector<int> diry{0, 1, 0, -1};
const int nax = 1e3 + 3; //// --------------> limit problem
const int inf = 2e9;
vector<vector<int>> dis(nax, vector<int> (nax, inf));


void dfs(int x, int y, int n, int m, vector<int>& rowcosts, vector<int>& colcosts) {
	for (int i = 0; i < 4; i++) {
		int tox = dirx[i] + x;
		int toy = diry[i] + y;
		int cost = 0;
		if (dirx[i] == 0) {
			cost = colcosts[toy];
		}
		else cost = rowcosts[tox];

		if (tox >= n || tox < 0 || toy >= m || toy < 0) continue;
		if (dis[x][y]+cost < dis[tox][toy]) {
			dis[tox][toy] = dis[x][y] + cost;
			dfs(tox, toy, n, m, rowcosts, colcosts);
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
	int sx = 1, sy = 0;
	int hx = 2, hy = 3;

	vector<int> rowcosts{5,4,3};
	vector<int> colcosts{8,2,6,7};
	int n = rowcosts.size(), m = colcosts.size();

	dis[sx][sy] = 0;
	dfs(sx, sy, n, m, rowcosts, colcosts);

	rje()<<rji(dis[hx][hy]);
}