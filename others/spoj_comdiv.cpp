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

const int NAX = 1e3+3;
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

long long com_div(int n, int m) {
	long long nod = 1; //number of divisors
	for (int X: store) {
		cerr << "~"<<X<<endl;
		if (X > sqrt(n) || X > sqrt(m)) break;
		cerr << "+"<<X<<endl;
		if (n%X==0 && m%X==0) {
			cerr<< X << endl;
			int cnt1 = 1, cnt2 = 1;
			while (n%X==0) n/=X, cnt1++;
			while (m%X==0) m/=X, cnt2++;
			nod *= min(cnt1, cnt2);
		}
	}
	if (n>1 && m>1) {
		int X = min(n, m);
		if (n%X==0 && m%X==0) nod *= 2;
	}
	return nod;
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
	int t; cin>>t; while(t--) {
		int n, m; cin >>n>>m;

		cout << com_div(n, m) << endl;
	}
}