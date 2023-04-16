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
	string word = "aaa";
	int n = word.size();
	int cnt = 0;
	if (word[0] == 'b') cnt = 1;
	else if (word[0] == 'c') cnt = 2;

	for (int i = 0; i < n; i++) {
		if (word[i] == 'a') {
			if (i+1 < n) {
				//if (word[i+1] == 'b') continue;
				if (word[i+1] == 'a') cnt += 2;
				else if (word[i+1] == 'c') cnt += 1;
			}
			else cnt += 2;
		}

		else if (word[i] == 'b') {
			if (i+1 < n) {
				if (word[i+1] == 'b') cnt += 2;
				else if (word[i+1] == 'a') cnt += 1;
			}
			else cnt += 1;
		}

		else if (word[i] == 'c') {
			if (i+1 < n) {
				if (word[i+1] == 'c') cnt += 2;
				else if (word[i+1] == 'b') cnt += 1;
			}
		}
	}

	cerr << cnt << endl;
}