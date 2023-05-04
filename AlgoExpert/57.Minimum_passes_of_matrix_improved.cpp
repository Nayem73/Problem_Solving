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
	vector<vector<int>> matrix{
		{0,-1,-3,2,0},
		{1,-2,-5,-1,-3},
		{3,0,0,-4,-1}
	};
	int n = matrix.size();
	int m = matrix[0].size();
	int turn = 0;
	
	vector<pair<int,int>> positions;
	int negs = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] < 0) negs++;
		}
	}

	if (negs == 0) {
		turn = 0;
		rje()<<rji(turn);
		return 0;
	}

	vector<vector<bool>> vis(n, vector<bool> (m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] > 0) {
				if (i-1 >= 0 && matrix[i-1][j] < 0 && !vis[i-1][j]) positions.push_back({i-1, j}), negs--, vis[i-1][j] = true;
				if (i+1 < n && matrix[i+1][j] < 0 && !vis[i+1][j]) positions.push_back({i+1, j}), negs--, vis[i+1][j] = true;
				if (j-1 >= 0 && matrix[i][j-1] < 0 && !vis[i][j-1]) positions.push_back({i, j-1}), negs--, vis[i][j-1] = true;
				if (j+1 < m && matrix[i][j+1] < 0 && !vis[i][j+1]) positions.push_back({i, j+1}), negs--, vis[i][j+1] = true;
			}
		}
	}

	turn++;
	if (negs == 0) {
		rje()<<rji(turn);
		return 0;
	}

	while (true) {
		vector<pair<int, int>> tmp;
		turn++;
		rje()<<rji(negs) rji(positions);
		for (auto x: positions) {
			int i = x.first, j = x.second;
			matrix[i][j] *= -1; // this was done for the first part. I could not *= -1 in the first part.
				if (i-1 >= 0 && matrix[i-1][j] < 0) tmp.push_back({i-1, j}), matrix[i-1][j] *= -1, negs--;
				if (i+1 < n && matrix[i+1][j] < 0) tmp.push_back({i+1, j}), matrix[i+1][j] *= -1, negs--;
				if (j-1 >= 0 && matrix[i][j-1] < 0) tmp.push_back({i, j-1}), matrix[i][j-1] *= -1, negs--;
				if (j+1 < m && matrix[i][j+1] < 0) tmp.push_back({i, j+1}), matrix[i][j+1] *= -1, negs--;
		}
		positions = tmp;
		// rje()<<
		if (negs == 0) {
			rje()<<rji(turn);
			return 0;
		}
	}
}