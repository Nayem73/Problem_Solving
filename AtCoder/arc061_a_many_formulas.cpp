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
	//SUBHANALLAH//231
//-------------------------------
	
	int n; cin >> n;
	vector<int> v;
	while (n) {
		v.push_back(n%10);
		n/=10;
	}

	reverse(v.begin(), v.end());
	rje()<<rji(v);

	vector<int> tmp{0};
	int sz = v.size(), sz2 = 1;
	for (int i = 0; i < sz; i++) {
		int X = v[i];
		for (int j = 0; j < sz2; j++) {
			int t = tmp[j]*10 + X;
			tmp.push_back(t);
		}
		sz2 = tmp.size();
	}

	rje()<<rji(tmp);

	string s = to_string(n);
	rje()<<rji(s);
	// string s1;

	sz2 = tmp.size();
	vector<vector<string>> ans(sz2); int indx = 0;

	for (int i = 1; i < (int)tmp.size(); i++) {
		string s1 = to_string(tmp[i]);
		string s2;
		for (int j = 0; j < (int)s.size(); j++) {
			if ((int)s1.size()==j) {
				string s3;
				for (int q = j; q < (int)s.size(); q++) s3+=s[q];
				
			}
			if (s1[j] == s[j]) s2 += s1[j];
		}
	}
}

// 0
// 1
// 2
// 12
// 3
// 13
// 23
// 123

// 1 23
// 1 2 3
// 12 3
// 12 3
// 1 2 3
// 1 23
// 123
