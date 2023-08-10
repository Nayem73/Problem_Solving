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

const int nax = 31623;
vector<int> store[nax+1];
void store_multiples(int n) {
	int upto = sqrt(n+2);
	for (int i = 1; i <= upto; i++) {
		if (n%i==0) {
			store[n].push_back(i);
		}
	}
}

void main_fnc() {
	int n; cin >> n;
	vector<int> v(n);
	for (int &X: v) cin >> X;

	sort(v.begin(), v.end());
	
	int q; cin >> q; while (q--) {
		int x, y; cin >> x >> y;
		for (int i = 1; i <= sqrt(y+2); i++)
	}
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
	for (int i = 1; i <= nax; i++) {
		store_multiples(i);
	}

	for (int i = 1; i <= 200; i++) {
		cout << i << ": ";
		for (int X: store[i]) {
			cout << X << ' ';
		}
		cout << endl;
	}

	int t; cin > t;
	while (t--) {
		main_fnc();
	}
}