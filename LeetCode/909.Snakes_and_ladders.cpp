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
	// vector<vector<int>> board{
	// 	{-1,-1,-1,-1,-1,-1},
	// 	{-1,-1,-1,-1,-1,-1},
	// 	{-1,-1,-1,-1,-1,-1},
	// 	{-1,35,-1,-1,13,-1},
	// 	{-1,-1,-1,-1,-1,-1},
	// 	{-1,15,-1,-1,-1,-1}
	// };
	
	// vector<vector<int>> board{
	// 	{1,1,-1},
	// 	{1,1,1},
	// 	{-1,1,1}
	// };

	// vector<vector<int>> board{
	// 	{-1,-1,2,21,-1},
	// 	{16,-1,24,-1,4},
	// 	{2,3,-1,-1,-1},
	// 	{-1,11,23,18,-1},
	// 	{-1,-1,-1,23,-1}
	// };

	vector<vector<int>> board{
		{-1,-1,30,14,15,-1},
		{23,9,-1,-1,-1,9},
		{12,5,7,24,-1,30},
		{10,-1,-1,-1,25,17},
		{32,-1,28,-1,-1,32},
		{-1,-1,23,-1,13,19}
	};


	int n = board.size();
	for (int i = n-1, j = 0; i >= 0; i--, j++) {
		if (j%2) reverse(board[i].begin(), board[i].end());
	}
	
	reverse(board.begin(), board.end());
	for (auto X: board) rje()<<X;

		int cnt = 1;
		vector<vector<int>> v = board;
		for (auto &X: v) {
			for (auto &Y: X) {
				Y = cnt++;
			}
		}

	for (auto X: v) rje()<<X;

	const int inf = 2e9;
	// vector<vector<int>> out(n, vector<int> (n, inf));
	// ans[0][0] = 0;
	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < n; j++) {
	// 		for (int lo = j+1; lo <= j+6; lo++) {
	// 			if (lo >= n) break;
	// 			ans[i][lo] = min(ans[i][lo], ans[i][j]+1);
	// 		}
	// 	}
	// }

	vector<int> sp[n*n+1];
	vector<int> ps(n*n+1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] != -1) {
				sp[board[i][j]].push_back(v[i][j]);
				ps[v[i][j]] = board[i][j];
				// rje()<<rji(board[i][j]) rji(sp[board[i][j]]);
			}
		}
	}

	vector<int> out(n*n+1, inf);
	out[1] = 0;
	// out[n*n] = inf-1;
	for (int i = 1; i <= n*n; i++) {
		if (i != 1 && !out[i]) continue;
		if (ps[i] && sp[i].empty()) continue;
		for (int j = i+1; j <= i+6; j++) {
			if (j > n*n) break;
			// if (j==32) {
			// 	cerr << "went in 32 from "<< i <<endl;
			// 	rje()<<rji(sp[j]);
			// }
			out[j] = min(out[j], out[i] + 1);
			if (!sp[j].empty()) {
				for (auto X: sp[j]) {
					out[j] = min(out[j], out[X]);
				}
			}
		}
	}

	rje()<<rji(out);

}
// failed testcase
// [[-1,-1,2,21,-1],[16,-1,24,-1,4],[2,3,-1,-1,-1],[-1,11,23,18,-1],[-1,-1,-1,23,-1]]


// -1 4
// -1 3