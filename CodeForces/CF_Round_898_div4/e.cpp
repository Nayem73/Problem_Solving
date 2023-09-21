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

bool bs(long long mid, vector<long long> &v, long long x) {
  long long cnt = 0;
  int n = v.size();
  for (int i = 0; i < (int)v.size(); i++) {
    if (v[i] >= mid) break;
    cnt += mid - v[i];
  }

  if (cnt > x) return false;
  return true;
}

void tc() {
	int n, x; cin >> n >> x;
  vector<long long> v(n);
  for (long long &X: v) cin >> X;
  sort(v.begin(), v.end());

  long long lo = 0, hi = 2e9;
  long long ans = 0;
  while (lo <= hi) {
    long long mid = (lo + hi) / 2L;
    if (bs(mid, v, x)) {
      ans = mid;
      lo = mid+1;
    }
    else {
      hi = mid-1;
    }
  }

  cout << ans << endl;
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