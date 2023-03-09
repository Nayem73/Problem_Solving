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
	vector<int> v{2,3,1,-4,-4,2};
	int n = v.size();
	map<int, int> mp;
	
	int cur = v[0];
	int indx = 0;

int cnt = 0;
	while (true) {
		
		if (indx + v[indx] < 0) {
			//i could just reverse the array and do the above operation for left jumping.
			//but for better complexity, some math
			indx++; //transform to 1 based indexing
			int bad_dibo = indx-1; 
			int total_jabo = -v[indx-1] - bad_dibo;
			indx = total_jabo%n; //eibar eitar opposite par er ta lagbe. ex: indx 1 hoile oiparer n lagbe
			if (indx == 0) indx = n;
			indx = (n+1) - indx; //this gives opposite //opposite indexing means how i check palindrome indexes are same or not
			indx--;
		}
		else {
			//this is the general system
			// indx = indx + v[indx];
			// if (indx >= n) {
			// 	indx = (indx+1)%n - 1;
			// }

			//this is the system where i will take the index at the beginning Alhamdulillah
			if (indx + v[indx] < n) indx = indx + v[indx];
			else {
				indx++;
				int bad_dibo = n-indx;
				int total_jabo = v[indx-1] - bad_dibo;
				indx = total_jabo%n;
				if (indx == 0) indx = n;
				indx--;
			}
		}
		cur = v[indx];
		++cnt;
		if (cnt == 7) break;
		rje()<<rji(cur) rji(indx);
	}
}