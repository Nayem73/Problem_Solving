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

vector<int> movx{-2, -2, +2, +2, -1, +1, -1, +1};
vector<int> movy{-1, +1, -1, +1, -2, -2, +2, +2};
const int nax = 22;
const int inf = 2e9;
int n, r1,c1,r2,c2;

vector<vector<int>> dis(nax, vector<int> (nax, inf));

void dfs(int x, int y) {
	// if (x==r2 && y==c2) retu

	for (int i = 0; i < 8; i++) {
		int tox = x+movx[i];
		int toy = y+movy[i];
		if (tox > n || tox <= 0 || toy > n || toy <= 0) continue;

		if (dis[tox][toy] > dis[x][y] + 1) {
			dis[tox][toy] = dis[x][y] + 1;
			rje()<<rji(dis[x][y])<<x<<' '<<y<<" - "<<tox<<' '<<toy << rji(dis[tox][toy]);
			dfs(tox, toy);
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
	int t; cin >> t; int tc = 0; while (t--) {
		for (int i = 0; i < nax; i++) {
			for (int j = 0; j < nax; j++) {
				dis[i][j] = inf;
			}
		}
		cin >>n>>r1>>c1>>r2>>c2;
		dis[r1][c1] = 0;
		dfs(r1, c1);
		cout << "Case #"<<++tc<<": "<< dis[r2][c2] << endl;
	}
}