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

void maxHeapify(vector<int>&heap, int i, int n) {
	int largestIndex = i;
	if (i*2 < n && heap[i*2] > heap[largestIndex]) {
		largestIndex = i*2;
	}
	if (i*2+1 < n && heap[i*2+1] > heap[largestIndex]) {
		largestIndex = i*2+1;
	}

	if (largestIndex != i) {
		swap(heap[i], heap[largestIndex]);
		maxHeapify(heap, largestIndex, n);
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
	vector<int> heap{-10000, 12,7,1,3,10,17,19,2,5};
	int n = heap.size();

	for (int i = n/2; i >= 1; i--) {
		maxHeapify(heap, i, n);
	}
	rje()<<rji(heap);

	for (int i = n-1; i > 1; i--) {
		swap(heap[i], heap[1]);
		rje()<<rji(heap);
		n--;
		maxHeapify(heap, 1, n);
		//rje()<<rji(heap);
		//rje();
	}

	rje()<<rji(heap);

}