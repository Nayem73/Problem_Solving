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

const int nax = 1e6;
vector<bool> primes(nax+1);
vector<int> store;

void sieve(int n) {
	for (int i = 2; i <= n; i++) {
		if (primes[i]) continue;
		store.push_back(i);
		for (int j = i+i; j <= n; j+=i) {
			primes[j] = true;
		}
	}
}

bool nod(long long n) {
	long long nod = 1;
	for (int X : store) {
		if (X*X > n) break;
		if (n%X == 0) {
			int cnt = 0;
			while (n%X == 0) {
				n/=X;
				cnt++;
			}
			nod *= (cnt+1);
		}
	}
	if (n > 1) {
		nod *= 2;
	}

	if (nod == 3) return true;
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
	sieve(1e6);

	int t; cin >> t; while (t--) {
		long long n; cin >> n;
		if (nod(n)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}