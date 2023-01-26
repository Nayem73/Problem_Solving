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
int tc = 0;

void fnc() {
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for (int &X: v) cin >> X;

	vector<long long> pref(n);
	pref[0] = v[0];
	for (int i = 1; i < n; i++) {
		pref[i] = pref[i-1] + v[i];
	}

	rje()<< rji(pref);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int prev_num = 0;
		if (i) prev_num = pref[i-1];
		for (int j = k; j <= pref[n-1]; j+=k) {

			auto it = lower_bound(pref.begin(), pref.end(), j+prev_num);
			if (*it == j+prev_num) ans++, rje()<<rji(j)rji(prev_num)rji(*it);

		}
	}

	cout<< "C#"<<++tc<<" : " << ans << endl;
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
	int t; cin >> t; while (t--) {
		fnc();
	}
}