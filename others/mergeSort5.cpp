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

void merge(vector<int>& store, int lo, int hi) {
	if (lo == hi) return;

	int mid = (lo+hi)/2;
	merge(store, lo, mid);
	merge(store, mid+1, hi);

	vector<int> firstHalf, lastHalf;
	for (int i = lo; i <= mid; i++) firstHalf.push_back(store[i]);
	for (int i = mid+1; i <= hi; i++) lastHalf.push_back(store[i]);

	int firstHalfIndx = 0, lastHalfIndx = 0;
	int storeIndx = lo;

	while (firstHalfIndx < firstHalf.size() && lastHalfIndx < lastHalf.size()) {
		if (firstHalf[firstHalfIndx] < lastHalf[lastHalfIndx]) {
			store[storeIndx] = firstHalf[firstHalfIndx];
			storeIndx++;
			firstHalfIndx++;
		} else {
			store[storeIndx] = lastHalf[lastHalfIndx];
			storeIndx++;
			lastHalfIndx++;
		}
	}

	while (firstHalfIndx < firstHalf.size()) {
		store[storeIndx] = firstHalf[firstHalfIndx];
		storeIndx++;
		firstHalfIndx++;
	}

	while (lastHalfIndx < lastHalf.size()) {
		store[storeIndx] = lastHalf[lastHalfIndx];
		storeIndx++;
		lastHalfIndx++;
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
	vector<int> store{5,4,1,-3,0,9,1,0,2,1,9};
	int n = store.size();

	merge(store, 0, n-1);

	rje()<<rji(store);
}