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
	int n; cin >> n;
	string s;
	cin >> s;

	int q;
	cin >> q;
	
	vector<pair<int,pair<int,char>>> store(q);
	int gotIndxFor3or4 = -1;
	for (int i = 0; i < q; i++) {
		int t, in; char c;
		cin >>t>>in>>c;
		store[i] = {t, {in-1, c}};
		if (t == 2 || t == 3) {
			gotIndxFor3or4 = i;
		}
	}

	for (int i = 0; i < q; i++) {
		if (store[i].first == 1) {
			s[store[i].second.first] = store[i].second.second;
		}

		if (i == gotIndxFor3or4) {
			if (store[gotIndxFor3or4].first == 2) {
				for (int ii = 0; ii < n; ii++) {
					if (s[ii] >= 'A' && s[ii] <= 'Z') {
						s[ii] = s[ii] + 32;
					}
				}
			} else {
				for (int ii = 0; ii < n; ii++) {
					if (s[ii] >= 'a' && s[ii] <= 'z') {
						s[ii] = s[ii] - 32;
					}
				}
			}
		}
	}

	cout << s << endl;
}