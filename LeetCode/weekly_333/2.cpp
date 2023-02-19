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
  int n = 7;
  // n = 54;
  // n = 39;

  vector<int> p2;
  for (int i = 0; i < 20; i++) {
    p2.push_back(pow(2, i));
  }
  rje()<<rji(p2);

  int cnt = 0;
  while (n) {
    bool flg = false;
    for (int X: p2) {
      if (X==n) {
        cnt++;
        flg = true;
        break;
      }
    }
    if (flg) break;

    int got = 1;
    int got2 = 2;
    for (int X: p2) {
      if (X > n) {
        got2 = X;
        break;
      }
      got = X;
    }


    int one = abs(got-n);
    int two = abs(got2-n);
    rje()<<rji(n);
    if (one < two) {
      n-=got;
      cnt++;
    }
    else {
      n = got2-n;
      cnt++;
    }


    rje()<<rji(n)<<rji(got)<<rji(got2)<<rji(cnt);
    cerr<<endl;


    // rje()<<rji(n);
    // n -= got;
    // // if (!n) break;
    // cnt++;
    // rje()<<rji(n)<<rji(got)<<rji(cnt);
    // // if (cnt==7)break;
  }

  cerr << cnt << endl;


}