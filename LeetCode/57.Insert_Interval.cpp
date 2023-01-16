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
	vector<vector<int>> intervals{
		// {1,2},{3,5},{6,7},{9,10},{12,16}
		{1,5}
		// {2,4},{5,7},{8,10},{11,13}
		// {0,5},{9,12}
	};
	vector<int> newInterval{6,8};

	vector<vector<int>> ans;
	int lo=0,hi=0;
	for (auto &X: intervals) {
		if (X[1] >= newInterval[0]) {
      lo = min(X[0], newInterval[0]); 
      vector<int> tmp{newInterval[1]};
      auto it = lower_bound(intervals.begin(), intervals.end(), tmp);
      // rje()<<rji(*it);
      if (it == intervals.end()) {
          int hi = max(newInterval[1], intervals[intervals.size()-1][1]);
          vector<int> got = {lo, hi};
          ans.push_back(got);
          // for (auto Y: ans) rje()<<rji(Y);
          break;
      }

			vector<int> got = *it;
			if (newInterval[1] == got[0]) {
				hi = got[1];
				vector<int> what(2); what[0] = lo, what[1] = hi;
				ans.push_back(what);
				while (++it != intervals.end()) {
					ans.push_back(*it);
				}
				// for (auto Y: ans) rje()<<rji(Y);
				break;
			}
			
			else if (newInterval[1] < got[0]) {
				if (it != intervals.begin()) {
            it--;
            vector<int> tt = *it;
            hi = max(newInterval[1], tt[1]);
            it++;
        }
				else hi = newInterval[1];
				vector<int> what(2); what[0] = lo, what[1] = hi;
				ans.push_back(what);
				rje()<<rji(*it);
				while (it != intervals.end()) {
					ans.push_back(*it);
					it++;
				}
				// for (auto Y: ans) rje()<<rji(Y);
				break;
			}
		}
		ans.push_back(X);
		if (intervals == ans && newInterval[0] >= intervals[intervals.size()-1][1]) ans.push_back(newInterval);  

	}

cerr<<"--------\n";
rje()<<rji(ans);

	// if (intervals == ans && newInterval[0] >= intervals[intervals.size()-1][1]) ans.push_back(newInterval);
	// if (intervals == ans &&  intervals[0][0] < ans[0][0]) ans[0][0] = intervals[0][0];
}