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
	vector<pair<int, char>> adj[500001];
	string s; cin >> s;
	int indx = 0;
	int cur = -1;
	rje()<<rji(s);
	int q; cin >> q; while (q--) {
		int t, i; char c;
		cin >> t >> i >> c;
		rje()<<rji(t);
		if (t== 1) {
			adj[indx].push_back({i-1, c});
			//cur = -1;
			s[i-1] = c;
		}
		else if (t==2) {
			indx++;
			cur = 2;
		}
		else if (t==3) {
			indx++;
			cur = 3;
		}
	}

	rje()<<rji(s);
	if (cur == 2) {
		for (int i = 0; i < n; i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] = s[i] + 32;
			}
		}
	} 
	else if (cur == 3) {
		for (int i = 0; i < n; i++) {
			if (s[i] >= 'a' && s[i] <= 'z') {
				s[i] = s[i] - 32;
			}
		}
	}

	for (auto X : adj[indx]) {
		s[X.first] = X.second;
	}

	cout << s << endl;
}