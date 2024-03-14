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

set<vector<int>> ans;
void getCombinations(vector<int>& candidates, int target, int curIndex, int curTarget, vector<int> curCandidates) {
    if (curTarget > target) return;
    rje()<<rji(curIndex) rji(curCandidates);

    if (curTarget == target) {
        sort(curCandidates.begin(), curCandidates.end());
        ans.insert(curCandidates);
        return;
    }
    
    for (int i = curIndex; i < (int)candidates.size(); i++) {
        curCandidates.push_back(candidates[i]);
        // cerr << "``````````````````````````````````` "<< curIndex+1 << endl;
        getCombinations(candidates, target, i+1, curTarget+candidates[i], curCandidates);
        curCandidates.pop_back();
        cerr<<endl;
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
	vector<int> candidates{10,1,2,7,6,1,5};
	int target = 8;

	getCombinations(candidates, target, 0, 0, {});
    vector<vector<int>> ret;
    for (vector<int> curVector : ans) {
        ret.push_back(curVector);
    }
    rje()<<rji(ret);
}