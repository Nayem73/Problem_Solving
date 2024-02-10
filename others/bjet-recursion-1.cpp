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

void rec(string s, int indxS, string& new_s) {
	if (indxS >= (int)s.length()) return;

	if (s[indxS] >= 'A' && s[indxS] <= 'Z') {
		s[indxS] += 32;
	}

	if (s[indxS] == 'a' || s[indxS] == 'e' || s[indxS] == 'i' || s[indxS] == 'o' || s[indxS] == 'u' || 
			(s[indxS] >= '0' && s[indxS] <= '9')) {
		//nothing.
	} else {
		if (s[indxS] >= 'a' && s[indxS] <= 'z') {
			s[indxS] -= 32;
		}
		new_s += "*";
		new_s += s[indxS];
	}

	rec(s, indxS+1, new_s);
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
	// string s = "kAeb9EC3dfO";
	string s = "1A2bcDnajMkW";
	string new_s;

	rec(s, 0, new_s);
	cout << new_s << endl;
	cerr << new_s << endl;
}