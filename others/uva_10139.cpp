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

const int NAX = 100001;
vector<int> primes_store;
vector<bool> primes(NAX);
void sieve(int n) {
	for (int i = 2; i <= n; i++) {
		if (primes[i]) continue;
		for (int j = i+i; j <= n; j+=i) {
			primes[j] = true;
		}
		primes_store.push_back(i);
	}
}

map<int,int> mp;
void prime_factors(int m) {
	for (int X: primes_store) {
		if (X > sqrt(m)) break;
		if (m%X == 0) {
			while (m%X == 0) m/=X, mp[X]++;
		}
	}
	if (m > 1) mp[m]++;
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
	int n, m;
	sieve(100000);
	while (cin >> n>>m) {
	mp.clear();
	prime_factors(m);
	// rje()<<primes_store;
	// rje()<<rji(mp);
	bool flg = true;
	for (auto X: mp) {
		int tmp = n;
		int cnt = 0;
		while (tmp) {
			cnt += tmp/X.first;
			tmp/= X.first;
		}
		// rje()<<rji(X)<<rji(cnt);
		if (cnt >= X.second) continue;
		flg = false; break;
	}
	if (!flg) cout << m <<" does not divide "<<n<<"!\n";
	else cout << m <<" divides "<<n<<"!\n";
}
}

// 5/2 = 2
// 2/2 = 1


// 2 = 2
// 2 2 = 4

// 6/3 = 2