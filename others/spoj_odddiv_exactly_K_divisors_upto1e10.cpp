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

vector<long long> odd_divs[NAX+1];
void prime_factorization_returns_divcnt(long long n) {
	long long num = n;
	// map<long long, long long> mp;
	long long divcnt = 1;
	for (int X: store) {
		if (X > sqrt(n)) break;
		long long cnt = 1;
		while (n%X == 0) n/=X, cnt++;
		divcnt *= cnt;
	}
	if (n>1) divcnt *= n+1;
	// for (auto X: mp) divcnt *= X.second+1;
	odd_divs[divcnt].push_back(num);
	// return divcnt;
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
	for (long long i = 1; ; i++) {
		long long num = i*i;
		if (num > 1e10L) break;
		prime_factorization_returns_divcnt(num);
		// if (got%2) cout << num << " "<<got << endl;
	}

	long long cnt1 = 0, cnt2 = 0;
	for (auto &X: odd_divs) {
		sort(X.begin(), X.end());
		cnt1++;
		cnt2 += X.size();
	}

	rje()<<cnt1<<' '<<cnt2;

	// rje()<<rji(odd_divs[2]);

	int t; cin >> t; while (t--) {
		long long k, lo, hi; cin >>k>>lo>>hi;
		long long got = upper_bound(odd_divs[k].begin(), odd_divs[k].end(), hi) - 
										lower_bound(odd_divs[k].begin(), odd_divs[k].end(), lo);

		cout << got << endl;
	}
}

// 2^2 * 3^2

