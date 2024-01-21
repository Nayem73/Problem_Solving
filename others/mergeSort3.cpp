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

void merge(vector<int> &v, int lo, int hi) {
	if (lo == hi) return;

	int mid = (lo+hi)/2;
	merge(v, lo, mid);
	merge(v, mid+1, hi);

	vector<int> leftHalf, rightHalf;
	for (int i = lo; i <= mid; i++) leftHalf.push_back(v[i]);
	for (int i = mid+1; i <= hi; i++) rightHalf.push_back(v[i]);


	int indx = lo;
	int leftIndx = 0, rightIndx = 0;

	
	while (leftIndx < leftHalf.size() && rightIndx < rightHalf.size()) {
		if (leftHalf[leftIndx] <= rightHalf[rightIndx]) {
			v[indx] = leftHalf[leftIndx];
			indx++;
			leftIndx++;
		} else {
			v[indx] = rightHalf[rightIndx];
			indx++;
			rightIndx++;
		}
	}

	while (leftIndx < leftHalf.size()) {
		v[indx] = leftHalf[leftIndx];
		indx++;
		leftIndx++;
	}
	while (rightIndx < rightHalf.size()) {
		v[indx] = rightHalf[rightIndx];
		indx++;
		rightIndx++;
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
	vector<int> v{5,0,-4,3,-9,3,0,1,0,3,9};
	int n = v.size();

	merge(v, 0, n-1);

	rje()<<rji(v);
}