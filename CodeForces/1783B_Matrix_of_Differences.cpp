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


void f() {
	int n; cin >> n;
	vector<vector<int>> v(n, vector<int> (n));
	int lo = 1, hi = n*n;
	bool flg = true;
	vector<vector<int>> last_out(n, vector<int> (n));

	for (int i = 0; i < n; i++) {
		vector<int> tmp;
		for (int j = 0; j < n; j++) {
			if (flg) v[j][i] = lo, flg = false, tmp.push_back(lo), lo++;
			else v[j][i] = hi, flg = true, tmp.push_back(hi), hi--;
		}
		if (i%2) reverse(tmp.begin(), tmp.end());
		for (int y = 0; y < n; y++) last_out[y][i] = tmp[y];
		rje()<<rji(tmp);
	}

	for (int i = 0; i < n; i++) {
		// if (i%2) reverse(v[i].begin(), v[i].end());
		for (int X: last_out[i]) cout << X << ' ';
		cout << endl;
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
	int t; cin >> t; while (t--) {
		f();
	}
}