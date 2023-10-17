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
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string input_str;
        cin >> input_str;

        int over = 0;
        int ball = 0;
        int run = 0;
        int wicket = 0;

        for (char s : input_str) {
            if (s == 'W') {
                wicket += 1;
            } else {
                run += s - '0';
            }

            ball += 1;

            if (ball == 6) {
                over += 1;
                ball = 0;
            }
        }

        cout << over << "." << ball << " " << (over * 6 + ball > 6 ? "Overs" : "Over") << " "
                  << run << " " << (run > 1 ? "Runs" : "Run") << " "
                  << wicket << " " << (wicket > 1 ? "Wickets" : "Wicket") << "." << endl;
    }

    return 0;
}
