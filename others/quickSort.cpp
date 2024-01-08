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

int partition(vector<int>& v, int lo, int hi) {
	int pivot = v[hi];
	int i = lo;

	for (int j = lo; j < hi; j++) {
		if (v[j] < pivot) {
			swap(v[j], v[i]);
			i++;
		}
	}

	swap(v[i], v[hi]);
	// rje()<<rji(v);
	return i;
}

void quickSort(vector<int>& v, int lo, int hi) {
	if (lo >= hi) return;
	int pivot = partition(v, lo, hi);

	quickSort(v, lo, pivot-1);
	quickSort(v, pivot+1, hi);
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
	// vector<int> v{1,5,6,3,8,4,7,2};
	vector<int> v{5,0,-4,3,-9,3,0,1,0,3,9};
	int n = v.size();
	quickSort(v, 0, n-1);

	rje()<<rji(v);
}