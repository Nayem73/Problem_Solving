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
	vector<int> mod(n);
	pref[0] = v[0];
	mod[0] = pref[0]%k;
	if (mod[0] < 0) mod[0] += k;

	for (int i = 1; i < n; i++) {
		pref[i] = pref[i-1] + v[i];
		mod[i] = pref[i] % k;
		if (mod[i] < 0) mod[i] += k;
	}
	rje()<<rji(mod);
	vector<int> freq[k+1];
	rje()<< rji(pref);
	for (int i = 0; i < n; i++) {
		freq[mod[i]].push_back(i);
	}
	rje()<<rji(freq[3]);

	int ans = 0; if (mod[0]==0) ans++;
	for (int i = 1; i < n; i++) {
		int X = mod[i];
		if (X==0) ans++;
		if (freq[X].empty()) continue;
		int got = lower_bound(freq[X].begin(), freq[X].end(), i-1) - freq[X].begin() + 1;
		auto it = lower_bound(freq[X].begin(), freq[X].end(), i-1);
		if (it == freq[X].end()) got--;
		else if (*it != i-1) got--;
		ans += got;
	}

	cout <<ans << endl;
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