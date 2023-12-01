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

bool chk(int n, vector<int>&d) {
	while (n) {
		int lstDigit = n%10;
		n/=10;
		for (int i =0; i < (int)d.size(); i++) {
			if (lstDigit == d[i]) return false;
		}
	}
	return true;
}

int rec(int n, vector<int> &d) {
	//cerr << n << endl;
	if (chk(n, d))	return n;
	for (int i = 0; i < 10; i++) {
		bool flg = true;
		for (int X: d) {
			if (X == i) {
				flg = false;
				break;
			}
		}
		if (!flg) continue;
		return rec(n+1, d);
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
	int n, k; cin >>n>>k;

	vector<int> d(k);
	for (int &X: d) cin >> X;

	sort(d.begin(), d.end());
	int ans = rec(n, d);
	cout << ans << endl;
}