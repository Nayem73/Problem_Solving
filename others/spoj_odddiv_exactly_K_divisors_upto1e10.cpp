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

const int NAX = 1e5 + 2;
vector<bool> primes(NAX+1);
vector<int> store;

void sieve(int n) {
	for (int i = 2; i <= n; i++) {
		if (primes[i]) continue;
		for (int j = i+i; j <= n; j+=i) {
			primes[j] = true;
		}
		store.push_back(i);
	}
}

bool prime_factorization(int n)

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
	sieve()
	int t; cin >> t; while (t--) {

	}
}

4 = 1 2 3 6
divs_of_n = factors_of_n(here i need that num 6)
4 = 4 (needed 6)

2*3=

2^2
2

3

2^1 * 3^1

16
3 = 1,3
9 = 1 3 9
16 = 1 2 16

[p^a+1] - 1 / p-1