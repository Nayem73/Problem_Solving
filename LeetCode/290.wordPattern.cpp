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

bool wordPattern(string pattern, string s) {
        map<char, int> mp1;
        map<string, int> mp2;
        
        
        int cnt = 0;
        vector<int> ans1, ans2;
        for (char X : pattern) {
            if (mp1.find(X) == mp1.end()) {
                mp1[X] = cnt;
                ans1.push_back(cnt);
                cnt++;
            } else {
                ans1.push_back(mp1[X]);
            }
        }
        
        cnt = 0;
        vector<string> vs;
        string tmp;
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == ' ') {
                vs.push_back(tmp);
                tmp.clear();
                continue;
            }
            tmp += s[i];
        }
        if (!tmp.empty()) {
            vs.push_back(tmp);
        }
        
        for (string X : vs) {
            if (mp2.find(X) == mp2.end()) {
                mp2[X] = cnt;
                ans2.push_back(cnt);
                cnt++;
            } else {
                ans2.push_back(mp2[X]);
            }
        }

        rje()<<rji(ans1) rji(ans2);
        
        return ans1 == ans2;
        
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
	string pattern = "abba", s = "dog cat cat dog";
	cerr << wordPattern(pattern, s);
}