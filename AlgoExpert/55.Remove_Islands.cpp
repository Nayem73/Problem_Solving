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
vector<vector<bool>> vis(nax, vector<bool> (nax, 0));

vector<int> dirx{0,0,1,-1};
vector<int> diry{1,-1,0,0};

void dfs(int x, int y, vector<vector<int>>& matrix) {
	int n = matrix.size();
	int m = matrix[0].size();

	for (int i = 0; i < 4; i++) {
		int tox = x + dirx[i];
		int toy = y + diry[i];

		if (tox < 0 || tox >= n || toy < 0 || toy >= m) continue;
		if (matrix[tox][toy] != 1) continue;
		if (vis[tox][toy]) continue;

		vis[tox][toy] = true;
		dfs(tox, toy, matrix);
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
	vector<vector<int>> matrix {
		{1,0,0,0,0,0},
		{0,1,0,1,1,1},
		{0,0,1,0,1,0},
		{1,1,0,0,1,0},
		{1,0,1,1,0,0},
		{1,0,0,0,0,1}
	};

	int n = matrix.size();
	int m = matrix[0].size();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((i == 0 || i == n-1 || j == 0 || j == m-1) && matrix[i][j] == 1) {
				vis[i][j] = true;
				dfs(i, j, matrix);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == 1 && !vis[i][j]) matrix[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		rje()<< matrix[i];
	}
}