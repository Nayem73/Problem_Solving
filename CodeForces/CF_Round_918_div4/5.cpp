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
	int t; cin >> t; while (t--) {
		int n; cin >> n;
		vector<int> v(n);
		for (int &X: v) cin >> X;

		map<long long, long long> odd;
		map<long long, long long> even;

		vector<long long> prefOdd;
		vector<long long> prefEven;

		long long od = 0, ev = 0;
		for (int i = 0; i < n; i++) {
			if (i%2 == 0) {
				ev+=v[i];
				prefEven.push_back(ev);
				// prefOdd[i] = (i?prefOdd[i-1]:0);
			} else {
				od+=v[i];
				prefOdd.push_back(od);
				// prefEven[i] = (i?prefEven[i-1]:0);
			}
		}

		rje()<<rji(prefEven);
		rje()<<rji(prefOdd);

		// for (int i = 0; i < n; i++) {
		// 	if ()
		// }
	}
}

/// trying out the problem almost there but not.

