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
	//AlgoExpert has an O(N) solution //
	//which is to run the algorithm once and 
	//pick the city which has the minimum amount of gas(it should have negative gas value)
	vector<int> distances{5,25,15,10,15};
	vector<int> fuel{1,2,1,0,3};
	double mpg = 10; //miles per gallon
	int n = distances.size();

	for (int i = 0; i < n; i++) {
		int cur = i;
		// if (cur >= n) cur = 0;
		bool flg = true;
		double available_dist = 0;
		double cur_fuel = 0;
		bool st = true; //start

		while (true) {
			if (cur == i && !st) break;
			st = false;
			cur_fuel += fuel[i];
			available_dist = cur_fuel*10;
			double dist_to_travel = distances[cur];

			available_dist -= dist_to_travel;
			if (available_dist < 0) {flg = false; break;}
			cur_fuel -= available_dist/mpg;
			cur++;
			if (cur >= n) cur = 0;
		}

		if (flg) {
			rje()<<rji(i) rji(distances[i]); //this node/city is the ans.
		}
	}
}