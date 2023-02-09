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
	vector<string> ideas{
		"coffee","donuts","time","toffee"
		// "coffee","donuts","time","toffee", "lack", "back"
		// "aaa","baa","caa","bbb","cbb","dbb"

	};

	int n = ideas.size();
	vector<string> fChar[125];

	for (string X: ideas) {
		string tmp = X.substr(1, X.size());
		fChar[X[0]].push_back(tmp);
	}

	for (int i = 97; i <= 122; i++) {
		if (fChar[i].empty()) continue;
		sort(fChar[i].begin(), fChar[i].end());
		cerr << char(i)<<": ";
		for (auto X: fChar[i]) {
			cerr << X << ' ';
		}
		cerr << endl;
	}

	long long ans = 0;

	for (int i = 97; i <= 122; i++) {
		if (fChar[i].empty()) continue;
		
		for (int j = i+1; j <= 122; j++) {
			if (fChar[j].empty()) continue;
			int cnt = 0;
		
			for (auto X: fChar[i]) {
				auto it = lower_bound(fChar[j].begin(), fChar[j].end(), X);
				if (it != fChar[j].end() && *it == X) cnt++;
			}
			long long lo = (int)fChar[i].size() - cnt;
			long long hi = (int)fChar[j].size() - cnt;
			if (hi < 0) hi = 0;
			ans += lo * hi * 2LL;
			rje()<<rji(fChar[i]) rji(fChar[j]) rji(lo) rji(hi) rji(ans) rji(cnt);
		}
	}

	cerr << ans << endl;
}