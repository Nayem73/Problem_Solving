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
	int n = 5, k = 4;
	vector<int> v(n+1);
	for (int i = 1; i <= n; i++) {
		v[i] = i;
	}
	int indx = n;

	while (true) {
		bool flg = true;
		for (int i = 1; i <= n; i++) {
			for (int j = i+1; j <= n; j++) {
				if (i+j == k) {
					flg = false; break;
				}
			}
			if (!flg) {
				break;
			}
		}
		if (!flg) {
			if (indx == 1) indx = n;
			v[indx]++;
			indx--;
		}
		else break;
		rje()<<rji(indx)rji(v);
	}
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cerr << sum << endl;
}