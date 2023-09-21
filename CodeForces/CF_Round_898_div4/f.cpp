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

// bool bs(long long mid, long long k, vector<int> &v, vector<int> &a) {
//   int n = v.size();

//   int cur = 0;
//   int ans = 0;
//   for (int i = 1; i < mid; i++) {
//     if (v[i]%)
//   }

//   int lo = 0, hi = 0;
//   long long total = a[0];

//   while (a[lo] > k) {
//     lo++;
//     if (lo >= n) break;
//   }

//   if (lo >= n) {
//     cout << 0 << endl;
//     continue;
//   }

//   for (int i = 1; i < n; i++) {
//     hi = i;
//     if (v[i] % v[i-1] == 0 && total + a[i] <= k) {
//       ans = max(ans, hi-lo+1);
//       total += a[i];
//       hi = i;
//     }
//     else {
//       total -= a[lo];
//       lo++;
//     }
//   }
// }

void tc() {
	int n;
  long long k;
  cin>>n>>k;
  vector<int> a(n), v(n);
  for (int &X: a) cin >> X;
  for (int &X: v) cin >> X;
  reverse(v.begin(), v.end());
  reverse(a.begin(), a.end());


  int cur = 0;
  int ans = 0;

  int lo = 0, hi = 0;

  while (a[lo] > k) {
    lo++;
    if (lo >= n) break;
  }

  if (lo >= n) {
    cout << 0 << endl;
    return;
  }
  ans = 1;
  long long total = a[lo];

  for (int i = 1; i < n; i++) {
    hi = i;
    if (v[i] % v[i-1] == 0 && total + a[i] <= k) {
      ans = max(ans, hi-lo+1);
      total += a[i];
      hi = i;
    }
    else if (v[i] % v[i-1] == 0 && total - a[lo] + a[i] <= k) {
      total -= a[lo];
      total += a[i];
      lo++;
    }
    else if (v[i] % v[i-1]) {
      lo = i;
      total = a[i];
      continue;
    }
    else if (a[i] > k) {
      lo = i+1;
      continue;
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