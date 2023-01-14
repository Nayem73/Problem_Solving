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

const int NAX = 1e5+3;
vector<bool> primes(NAX+1);
vector<int> store;

void sieve(long long n) {
	for (long long i = 2; i <= n; i++) {
		if (primes[i]) continue;
		for (long long j = i+i; j <= n; j+=i) {
			primes[j] = true;
		}
		store.push_back(i);
	}
}

bool chk_prime(long long n) {
	for (int X: store) {
		if ((long long)X > sqrt(n)) break;
		if (n%X==0) return false;
	}
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
	sieve(NAX);
	int t; cin >> t; while (t--) {
		long long n; cin >> n;
		while (--n) {
			if (chk_prime(n)) {cout << n << endl; break;}
		}
	}
}