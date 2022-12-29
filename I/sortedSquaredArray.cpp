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

void two_pointers_approach_my_way(vector<int> arr) {
	rje()<<rji(arr);
	int lo,hi;
	int n = arr.size();
	
	for (int i = 0; i< n; i++) {
		if (arr[i] >= 0) {
			hi = i;
			lo = i-1;
			break;
		}
	}
	cerr<<arr[lo] << arr[hi] << endl;

	vector<int> ans;

	while (lo >= 0 || hi < n) {
		if (lo < 0 || (hi < n && (abs(arr[lo]) > abs(arr[hi])))) {
			ans.push_back(arr[hi]*arr[hi]);
			hi++;
		}
		else {
			ans.push_back(arr[lo]*arr[lo]);
			lo--;
		}
	}
	rje()<<"from two_pointers_approach_my_way: "<<rji(ans);
}

void two_pointers_approach_algoExpert_way(vector<int> arr) {
	int n = arr.size();
	int lo = 0, hi = n-1;
	vector<int> ans;
	
	while (lo <= hi) {
		if (abs(arr[lo]) < abs(arr[hi])) {
			ans.push_back(arr[hi]*arr[hi]);
			hi--;
		}
		else {
			ans.push_back(arr[lo]*arr[lo]);
			lo++;
		}
	}
	reverse(ans.begin(), ans.end());
	rje()<<"from two_pointers_approach_algoExpert_way: "<<rji(ans);
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
	//in linear time
	//given an array in sorted order, return it's square in sorted
	
	vector<int> arr{-7,-5,-4,3,6,8,9};
	two_pointers_approach_my_way(arr);
	two_pointers_approach_algoExpert_way(arr);

	vector<int> neg;
	for (int X: arr) {
		if (X < 0) neg.push_back(X);
	}

	int indx = neg.size()-1;

	vector<int> ans;
	for (int i = 0; i < (int)arr.size(); i++) {
		int X = arr[i];
		if (X < 0) continue;
		if (indx < 0) ans.push_back(X*X);
		else if (X < -neg[indx]) ans.push_back(X*X);
		else {
			// if (indx < 0) continue;
			ans.push_back(neg[indx]*neg[indx]);
			indx--;
			i--;
		}
	}

	rje()<<rji(ans);

}