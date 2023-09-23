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

bool cmp(string &word1, string &word2) {
	if (word1.size() < word2.size()) return true;
	return false;
}

int rec(vector<string> &words, int previndx, int curindx, int cnt) {

	if (curindx > 0) {
		if ((int)words[previndx].size()+1 != (int)words[curindx].size()) {
			return cnt-1;
		}

		int matchedIndx = 0;
		bool flg = false;
		for (int i = 0; i < (int)words[curindx].size(); i++) {
			if (words[curindx][i] == words[previndx][matchedIndx]) {
				matchedIndx++;
			}
			if (matchedIndx >= (int)words[previndx].size()) {
				flg = true;
				break;
			}
		}

		if (!flg) {
			rje()<<"here "<< rji(words[previndx]) rji(words[curindx]);
			return cnt - 1;
		}
	}

	rje()<<rji(previndx) rji(curindx) rji(cnt) rji(words[previndx]) rji(words[curindx]);
	
	int got = cnt;
	for (int i = curindx; i < (int)words.size(); i++) {
		for (int j = i+1; j < (int)words.size(); j++) {
			got = max(got, rec(words, i, j, cnt+1));
		}
	}

	return got;
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
	vector<string> words{
		"a","b","ba","bca","bda","bdca"
		// "xbc","pcxbcf","xb","cxbc","pcxbc"
		// "abcd","dbqca"
	};
	int n = words.size();

	sort(words.begin(), words.end(), cmp);
	rje()<<words;

	// for (int i = 0; i < n; i++) {
	// 	string s = words[i];

	// }

	int got = rec(words, 0, 0, 1);
	cerr << got<< endl;
}