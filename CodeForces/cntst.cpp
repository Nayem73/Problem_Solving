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

int nax = 3200;
vector<int> store;
vector<bool> primes(nax+1);

void sieve(int n) {
	primes[1] = true;
	for (int i = 2; i <= n; i++) {
		if (primes[i]) continue;
		for (int j = i+i; j <= n; j+=i) {
			primes[j] = true;
		}
	}
}

bool is_prime(int n) {
	for (int X: store) {
		if (X*X > n) break;
		if (n%X == 0) return false;
	}
	return false;
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
	sieve(nax);

	int t; cin >> t; while (t--) {
		int a, b; cin>>a>>b;
			int l = 2, r = a-2;
			if (r < l) {
				cout << -1 << endl;
				continue;
			}
			bool flg = false;
			while (l+r <= b) {
				if (__gcd(l, r) != 1) {
					cout << l << ' '<< r << endl;
					flg = true;
					break;
				}
				r++;
			}

			if (!flg) cout << -1 << endl;
	}
}