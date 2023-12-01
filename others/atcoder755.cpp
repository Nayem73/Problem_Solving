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

long long cnt = 0;

bool chk(long long n) {
	long long q = n;
	vector<long long> numbers(10);

	while (n) {
		long long lstDigit = n%10;
		numbers[lstDigit]++;
		n/=10;
	}

	if (!numbers[3] || !numbers[5] || !numbers[7]) return false;

	for (long long i = 0; i < 10; i++) {
		if (i==3 || i==5 || i==7) continue;
		if (numbers[i]) return false;
	}
	return true;
}

void abc114c(long long n, long long upto) {
	if (n > upto) return;
	if (chk(n)) {
		cnt++;
		rje()<< n;
	}

	abc114c(n*10 + 3, upto);
	abc114c(n*10 + 5, upto);
	abc114c(n*10 + 7, upto);
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
	long long n; cin >> n;
	abc114c(0, n);
	cout << cnt << endl;
}