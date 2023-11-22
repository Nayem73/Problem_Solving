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

vector<bool> primes(50003);
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

bool factdiv(int p, int cnt, int fact) {
	int curcnt = 0;
	while (fact) {
		curcnt += fact/p;
		fact /= p;
	}

	if (curcnt >= cnt) return true;
	return false;
}

bool dividing(int fact, int n) {
	for (int p : store) {
		int num = n;
		if (num % p == 0) {
			int cnt = 0;
			while (num%p == 0) {
				cnt++;
				num/=p;
			}

			if(!factdiv(p, cnt, fact)) {
				return false;
			}
		}
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
	sieve(50000);
	int fact, n;
	while (cin >> fact >> n) {
		if (dividing(fact, n)) {
			cout << n << " divides "<< fact << "!\n";
		} else {
			cout << n << " does not divide "<<fact << "!\n";
		}
	}
}

// 2,3,4,5,6
// 2,2,2,2,3,3,5

// 3*3


// 11/3 = 3/3 = 