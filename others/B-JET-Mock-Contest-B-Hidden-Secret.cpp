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
	int tt, tc = 0; cin >> tt; 
	for (int ttt = 0; ttt < tt; ttt++) {
		
		string s1, t1, s, t;
		string tmp;
		
		if (ttt == 0) getline(cin, tmp);
		getline(cin, s1);
		getline(cin, t1);

		// cerr << s1 << endl;
		// cerr << t1 << endl;
		// cerr << endl;

		for (int i = 0; i < s1.size(); i++) {
			if (s1[i] == ' ') continue;
			if (s1[i] >= 97) s1[i] -= 32;
			s += s1[i];
		}
		for (int i = 0; i < t1.size(); i++) {
			if (t1[i] == ' ') continue;
			if (t1[i] >= 97) t1[i] -= 32;
			t += t1[i];
		}

		// cout << s << endl << t << endl;
		// cout << endl;

		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		if (s == t) {
			cout << "Case "<< ++tc << ": "<< "Yes" << endl;
		} else {
			cout << "Case "<< ++tc << ": "<< "No" << endl;
		}
	}
}