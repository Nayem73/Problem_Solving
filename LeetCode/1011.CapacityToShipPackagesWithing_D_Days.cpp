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

bool bs(int mid, vector<int> &weights, int days) {
	int sum = 0;
	int n = weights.size();
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		sum += weights[i];
		if (weights[i] > mid) return false;
		if (sum > mid) {
			sum = weights[i];
			cnt++;
		}
	}
	if (cnt > days) return false;
	return true;
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
	vector<int> weights{1,2,3,4,5,6,7,8,9,10}; int days = 5;
	int lo = 0, hi = 1e8;
	int got = -1;
	while (lo <= hi) {
		int mid = (lo+hi)/2;
		if (bs(mid, weights, days)) {
			got = mid;
			hi = mid - 1;
		}
		else lo = mid+1;
	}

	rje()<< rji(got);

}