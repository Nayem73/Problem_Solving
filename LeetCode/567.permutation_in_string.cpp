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
	string s1 = "bsa", s2 = "cddasb";
	int n = s1.size(), m = s2.size();

	vector<int> vis(125);
        
  for (int i = 0; i < (int)s1.size(); i++) {
     vis[s1[i]]++;
  }

  for (int i = 0; i < n; i++) {
  	char x = s2[i];
  	vis[x]--;
  }

  int lo = 0, hi = n-1;
  // char old_char = s2[0];

  while (hi < m) {

  	bool flg = true;
  	for (int i = 97; i <= 122; i++) {
  		if (vis[i] != 0) flg = false;
  	}
  	cerr<<flg <<endl;

  	if (flg) {
  		cerr << "ok! at: "<< lo << ' '<<hi << endl;
  	}
  	char old_char = s2[lo], new_char=s2[lo];
  	old_char = s2[lo];
  	if (hi+1 < m) new_char = s2[hi+1];

  	vis[old_char]++;
  	vis[new_char]--;

  	lo++; hi++;


  }

}