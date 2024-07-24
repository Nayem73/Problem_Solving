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
int N = 8;
int countPossbileBoards = 0;

bool isSafe(vector<vector<int>>& board, int row, int col) {
	for (int i = row; i >= 0; i--) {
		if (board[i][col]) {
			return false;
		}
	}

	for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
		if (board[i][j]) {
			return false;
		}
	}

	for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
		if (board[i][j]) {
			return false;
		}
	}

	return true;
}

void NQueens(vector<vector<int>>& board, int row) {
	if (row == N) {
		countPossbileBoards++;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << board[i][j] << ' ';
			}
			cout << endl;
		}
		cout << endl;
		return;
	}

	for (int col = 0; col < N; col++) {
		if (isSafe(board, row, col)) {
			board[row][col] = 1;
			NQueens(board, row+1);
			board[row][col] = 0;
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
	vector<vector<int>> board(N, vector<int> (N, 0));

	NQueens(board, 0);
	cerr << "all possible ways to place "<< N << " Queens "<<"in a NxN board: "<< countPossbileBoards<<endl;
}