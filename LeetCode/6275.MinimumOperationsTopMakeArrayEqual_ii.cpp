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
	
	vector<int> nums1{13,6,10,16};
	vector<int> nums2{1,16,12,16};
	int k = 2;

	vector<int> dec;
	vector<int> inc;
	int n = nums1.size();
	for (int i = 0; i < n; i++) {
		int X = nums1[i];
		int Y = nums2[i];
		if (X > Y) dec.push_back(X-Y);
		else if (X < Y) inc.push_back(Y-X);
	}

	long long sum1 = accumulate(dec.begin(), dec.end(), 0);
	long long sum2 = accumulate(inc.begin(), inc.end(), 0);

	if (sum1 != sum2) return -1;
  if (k == 0) {
      if (!sum1 && !sum2) return 0;
      return -1;
  }
    
  for (long long X: inc) {
    if (X%k) return -1;
  }

  for (long long X: dec) {
    if (X%k) return -1;
  }

  long long out1 = 0;
  for (long long X: inc) {
     out1 += X/k;
  }

  return out1;

	// if (sum1 != sum2) return -1;
	// int ret = max(dec.size(), inc.size());
	// rje()<<rji(ret);
}