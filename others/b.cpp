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

vector<bool> primes(1000003);
vector<int> store;

void sieve(int n) {
  for (int i = 2; i <= n; i++) {
    if (primes[i]) continue;
    store.push_back(i);
    for (int j = i+i; j <= n; j+=i) {
      primes[j] = true;
    }
  }
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
  int a = __gcd(12, __gcd(15,21));

  // cerr<<a<<endl;

  int tc =0;
  sieve(1e6);
  cerr<<store.size();


  int n,k; cin >> n>>k;
  vector<int> v(n);
  for (int &X: v) cin >> X;
  // vector<vector<bool>> grid(100003, vector<bool>(78499));
  vector<vector<bool>> grid(10, vector<bool>(22));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (int)store.size(); j++) {
      int X = store[j];
      if (X > v[i]) break;
      if (v[i]%X == 0) {
        grid[i][j] = true;
      }
    }
  }

  rje()<<rji(v);

  rje()<<rji(grid[1]);
}