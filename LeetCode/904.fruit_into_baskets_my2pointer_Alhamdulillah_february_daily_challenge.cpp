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
	vector<int> fruits{1,9,3,4,3};
	int n = fruits.size();

	int lo = 0;
	int cnt = 0;
	int ans = 0;
	map<int,int> mp;
	int cur = -1, f_num = -1, s_num = -1;
	for (int hi = 0; hi < n; hi++) {
		int x = fruits[hi];
		// rje()<<rji(x) rji(mp);
		if (mp.find(x) == mp.end()) {
			if ((int)mp.size() < 2) {
				mp[x]++;
				ans = max(ans, hi-lo+1);
				if (f_num==-1) f_num = x;
				else s_num = x;
				cur = x;
			}
			else {
				int del = -1;
				if (cur != f_num) del = f_num;
				else del = s_num;
				
				while (lo <= hi) {
					
					if (mp[del] != 0) {
						mp[fruits[lo]]--;
						lo++;
					}
					else {
						// rje()<<rji(mp) << rji(lo);
						// return 0;
						mp.erase(del);
						mp[x]++;
						f_num = cur;
						s_num = x;
						cur = x;
						break;
					}
				}
			}
		}

		else {
			ans = max(ans, hi-lo+1);
			cur = x;
			mp[x]++;
		}

		rje()<<rji(x) rji(f_num)rji(s_num) rji(cur) rji(mp) rji(ans) rji(lo) rji(hi);
		
	}

	rje()<<rji(ans);
}