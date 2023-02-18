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
	int num = 90;
	string s = to_string(num);
	string org = s;
	string t = s;
	int chng = 0;
	// int chng2 = 0;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (org[i] != '9') {chng = i; break;}
	}

	// for (int i = 0; i < n; i++) {
	// 	if (org[i] != '') {chng = i; break;}
	// }

	for (int i = 0; i < n; i++) {
		if (s[i] == org[chng]) s[i] = '9';
		if (org[i] == org[0]) t[i] = '0';
	}

	int num1 = 0, num2 = 0;
	stringstream ss(s);
	while (ss  >> num1) {}

	stringstream sss(t);
	while (sss >> num2) {}

	rje()<<rji(num1) rji(num2);
}