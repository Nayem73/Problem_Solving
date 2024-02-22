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

int getRow(int x, int y, int n, vector<string>& grid) {
	int danDik = x;
	int danDikCnt = 0;
	for (int j = y; j < n; j++) {
		if (grid[x][j] != '1') {
			break;
		}
		danDikCnt++;
		danDik = j;
	}
	int cnt = 0;
	if (danDikCnt+x-1 >= n) return false;
	rje()<<rji(danDikCnt);
	rje()<<rji(danDikCnt+x-1);

	int totalCnt = 0;

	for (int i = x; i <= danDikCnt+x-1; i++) {
		cnt = 0;
		for (int j = y; j <= danDik; j++) {
			// cout << j << ' ';
			if (grid[i][j] == '1') cnt++;
		}
		// cout << endl;
		if (cnt != danDikCnt) return false;
		totalCnt += cnt;
	}

	int curCnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == '1') curCnt++;
		}
	}
	if (curCnt != totalCnt) return false;

	return true;
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
	int t; cin >> t; while (t--) {
		int n; cin >> n;
		vector<string> grid(n);
		for (int i = 0; i < n; i++) {
			cin >> grid[i];
		}

		bool flg = true;
		bool gotit = false;
		for (int i = 0; i < n; i++) {
			if (gotit) break;
			for (int j = 0; j < n; j++) {
				if (grid[i][j] == '1') {
					flg = getRow(i, j, n, grid);
					gotit = true;
					break;
				}
			}
		}
		if (flg) cout << "SQUARE\n";
		else cout << "TRIANGLE\n";
	}

}