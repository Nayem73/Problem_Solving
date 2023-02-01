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
	string str1 = "abcdabcd", str2 = "abcdabcdabcd";
	int n = str1.size();
	vector<string> got1, got2;
	for (int len = 1; len <= n; len++) {
		string s = str1.substr(0, len);
		bool flg = true;
		for (int j = len; j < n; j+=len) {
			string tmp = str1.substr(j, len);
			if (tmp != s) {
				flg = false; break;
			}
		}
		if (flg) got1.push_back(s);
	}

	n = str2.size();
	for (int len = 1; len <= n; len++) {
		string s = str2.substr(0, len);
		bool flg = true;
		for (int j = len; j < n; j+=len) {
			string tmp = str2.substr(j, len);
			if (tmp != s) {
				flg = false; break;
			}
		}
		if (flg) got2.push_back(s);
	}

	rje()<<rji(got1);
	rje()<<rji(got2);

	vector<string> ans;
	for (string x: got1) {
		for (string y : got2) {
			if (x==y) {
				ans.push_back(x);
				break;
			}
		}
	}

	sort(ans.begin(), ans.end(), [&](string x, string y){
		return x.size() > y.size();
	});

	string ret;
	if (!ans.empty()) ret = ans[0];
	cerr<<ret<<endl;
	rje()<<rji(ans);

}