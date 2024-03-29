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

void mergeSort(vector<int>& num, int lo, int hi) {
	if (lo >= hi) return;
	int mid = (lo+hi) / 2;
	mergeSort(num, lo, mid);
	mergeSort(num, mid+1, hi);
	vector<int> firstPart, secondPart;
	for (int i = lo; i <= mid; i++) firstPart.push_back(num[i]);
	for (int i = mid+1; i <= hi; i++) secondPart.push_back(num[i]);

	int firstPartIndex = 0, secondPartIndex = 0;
	int numIndex = lo;
	while (firstPartIndex < (int)firstPart.size() && secondPartIndex < (int)secondPart.size()) {
		if (firstPart[firstPartIndex] < secondPart[secondPartIndex]) {
			num[numIndex] = firstPart[firstPartIndex];
			numIndex++;
			firstPartIndex++;
		} else {
			num[numIndex] = secondPart[secondPartIndex];
			numIndex++;
			secondPartIndex++;
		}
	}

	while (firstPartIndex < (int)firstPart.size()) {
		num[numIndex] = firstPart[firstPartIndex];
		numIndex++;
		firstPartIndex++;
	}
	while (secondPartIndex < (int)secondPart.size()) {
		num[numIndex] = secondPart[secondPartIndex];
		numIndex++;
		secondPartIndex++;
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
	vector<int> num{3,1,19,-1,0,-1,8,8};
	int n = num.size();
	mergeSort(num, 0, n-1);
	rje()<<rji(num);	
}