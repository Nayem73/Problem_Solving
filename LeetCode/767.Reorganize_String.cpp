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

map<char, int> mp;

/*
if i do it like this it does not work
bool cmp(char c1, char c2) {
	if (mp[c1] >= mp[c2]) return true;
	return false;
}
*/

bool cmp(char c1, char c2) {
    if (mp[c1] > mp[c2]) return true;
    if (mp[c1] < mp[c2]) return false;
    return c1 < c2; // If frequencies are equal, sort lexicographically.
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
	string s = "vvdvdpovodl";
	int n = s.size();
	for (int i = 0; i < n; i++) {
		mp[s[i]]++;
	}
	sort(s.begin(), s.end(), cmp);

	rje()<<rji(s);

	string out;
	while (true) {
		int i = 0;
		cerr <<s[i]<< endl;
		out += s[i];
		int indxj = -1;
		for (int j = i+1; j < n; j++) {
			if (s[i] == s[j]) continue;

			indxj = j;
			out += s[j];
			break;
		}
		if (indxj < 0) break;
		string tmp = s;
		s.clear();
		for (int q = 0; q < n; q++) {
			if (q == i || q == indxj) continue;
			s += tmp[q];
		}

		sort(s.begin(), s.end(), cmp);
		rje()<<rji(s);
		n = s.size();

	}

	rje()<<rji(out);
}
