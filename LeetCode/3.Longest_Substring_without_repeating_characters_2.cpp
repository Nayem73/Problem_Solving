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
	string s = "pwwkew";
	int n = s.size();

	vector<bool> freq(130);

	int cnt = 0;
	int ans = 1;
	int curPos = 0;
	for (int i = 0; i < n; i++) {
		if (!freq[s[i]]) {
			cnt++;
			freq[s[i]] = true;
			cout << "- "<< i << endl;
		} else {
			ans = max(ans, i-curPos);
			rje()<<rji(curPos) rji(i) rji(i-curPos);
			while (curPos != i) {
				freq[s[i]] = false;
				curPos++;
			}
			rje()<<rji(curPos);
		}
	}
	// rje()<<rji(curPos);
	// ans = max(ans, (n-1) - curPos);

	cout << ans << endl;
}