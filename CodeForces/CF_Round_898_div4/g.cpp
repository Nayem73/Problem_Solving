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

void tc() {
	string s; cin >> s;
  int n = s.size();
  cerr<< s << endl;
  bool flg = true;
  long long ans = 0;
  while (flg) {
    flg = false;
    for (int i = 1; i < n; i++) {
      string tmp; 
      tmp += s[i-1];
      tmp += s[i];
      if (tmp == "BA") {s[i-1] = 'C'; s[i] = 'B'; flg = true; ans++;}
      else if (tmp == "AB") {s[i-1] = 'B'; s[i] = 'C'; flg = true; ans++;}
    }

    for (int i = n-2; i >= 0; i--) {
      string tmp; 
      tmp += s[i];
      tmp += s[i+1];
      if (tmp == "BA") {s[i] = 'C'; s[i+1] = 'B'; flg = true; ans++;}
      else if (tmp == "AB") {s[i] = 'B'; s[i+1] = 'C'; flg = true; ans++;}
    }
  }

  cout << ans<< endl;
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
	int t; cin >> t; while (t--) {
		tc();
	}
}