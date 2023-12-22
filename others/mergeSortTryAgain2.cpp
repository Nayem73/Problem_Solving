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

vector<int> v{4,1,3,-4,2,-9,8,1,0,1,2};

void mergeSort(int lo, int hi) {
	if (lo == hi) return;

	int mid = (lo+hi)/2;
	mergeSort(lo, mid);
	mergeSort(mid+1, hi);

	vector<int> farray, sarray;
	for (int i = lo; i <= mid; i++) farray.push_back(v[i]);
	for (int i = mid+1; i <= hi; i++) sarray.push_back(v[i]);

	int n1 = farray.size(), n2 = sarray.size();
	int indx1 = 0, indx2 = 0;
	int indx = lo;
	
	while (indx1 < n1 && indx2 < n2) {
		if (farray[indx1] <= sarray[indx2]) {
			v[indx] = farray[indx1];
			indx1++;
			indx++;
		} else {
			v[indx] = sarray[indx2];
			indx2++;
			indx++;
		}
	}

	while (indx1 < n1) {
		v[indx] = farray[indx1];
		indx1++;
		indx++;
	}
	while (indx2 < n2) {
		v[indx] = sarray[indx2];
		indx2++;
		indx++;
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
	
	int n =v.size();
	mergeSort(0, n-1);
	rje()<<rji(v);
}