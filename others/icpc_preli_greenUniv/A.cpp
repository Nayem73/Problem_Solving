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

	const int nax = 105;
	vector<int> pos(nax);
	bool flg = true;
	// pos[1] = 2;
	for (int i = 2; i <= 100; i+=3) {
		// pos[i] = pos[i-1] + 1;
		int tmp = pos[i-1] + 1;
		// pos[i] = pos[i-1] + 1;
		// pos[i] = pos[i-1] + 1;

		if (flg) {
			
			pos[i] += tmp;
			pos[i+1] += tmp;
			pos[i+2] += tmp;
			flg = false;
		}
		else {
			pos[i] += tmp;
			pos[i+1] += tmp;
			pos[i+2] += tmp;
			flg = true;
		}
	}

	rje()<< rji(pos);
	int tc = 0; int t; cin >> t; while (t--) {

  int n; cin >> n;
	vector<vector<char>> v(3, vector<char> (n));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		rje()<<rji(v[i]);
	}

	vector<int> v2;
	for (int i = 0; i < n; i++) {
		flg = true;
		int cnt = 0;
		for (int j = 0; j < 3; j++) {
			if (j == 1 && v[j][i] == 'X') flg = false;
			if (v[j][i] == 'X') {
				cnt++;
			}
		}

		if (cnt >= 2 || !flg) {
			v2.push_back(i);
		}
	}

	v2.push_back(n);

	rje()<<rji(v2);

	int result = 0;
	int p = 0;
	for (int i = 0; i < (int)v2.size(); i++) {
		int cur = abs(v2[i] - p);
		int got = pos[cur];
		result += got;
		p = v2[i] + 1;
	}

	rje()<<rji(result);

	if (result%2 == 0) cout << "Case "<<++tc << ": "<< "Grandma\n";
	else cout << "Case "<<++tc << ": "<< "Jhinuk\n";

}
}