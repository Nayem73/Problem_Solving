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
	vector<int> s(n);
	for (int &X: s) cin >> X;
	vector<int> pref(n); pref[0] = s[0]%k;
	for (int i = 1; i < n; i++) pref[i] = pref[i-1] + s[i]%k;

	map<int,int> mp; mp[0] = 1;
	int ans = 0;

	rje()<<rji(pref);
	rje()<<rji(mp);

	for (int i = 0; i < n; i++) {
		int need_to_remove = pref[i] % k;
		rje()<<rji(i);
		rje()<<rji(need_to_remove);
    if (need_to_remove < 0) need_to_remove += k; //Because -1 % 5 = -1, but we need the positive mod 4

		if (mp.find(need_to_remove) != mp.end()) {
			ans += mp[need_to_remove];

			rje()<<"---- "<<rji(need_to_remove)rji(mp[need_to_remove])rji(ans);
		}

		mp[need_to_remove]++;
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