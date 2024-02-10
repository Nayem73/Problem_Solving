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

const int mod = 1000003;

vector<long long> fact(1000003);

long long bigmod(long long a, long long b) {
	if (b == 0) return 1;
	long long x = bigmod(a, b/2);
	x = (x*x) % mod;
	if (b%2) {
		x = (x*a) % mod;
	}
	return x;
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
	
	fact[0] = 1;
	for (int i = 1; i <= 1000000; i++) {
		fact[i] = (fact[i-1] * i) % mod;
	}

	int t, tc = 0; cin>>t;
	
	while (t--) {
		int n, r; cin >> n>>r;
		long long up = fact[n];
		long long down = (fact[r] * (long long)fact[n-r]) % mod;
		long long nCr = (up * bigmod(down, mod-2))%mod;
		cout << "Case "<<++tc<<": "<< nCr << endl;
	}
}