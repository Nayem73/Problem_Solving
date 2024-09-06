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

struct rectangle {
    long long x, y, w, h;
};

long long countOverlap = 0;

long long calculateTotalOverlap(rectangle& a, rectangle& b) {
    long long overlap_x = max(0LL, min(a.x+a.w, b.x+b.w) - max(a.x, b.x));
    long long overlap_y = max(0LL, min(a.y+a.h, b.y+b.h) - max(a.y, b.y));
    if (overlap_x*overlap_y > 0) countOverlap++;
    return overlap_x*overlap_y;
}

long long calculate(vector<rectangle>& rects, int k) {
    long long area = 0;
    for (int i = 0; i < k; i++) {
        area += rects[i].w * rects[i].h;
    }

    for (int i = 0; i < k; i++) {
        for (int j = i+1; j < k; j++) {
            area -= calculateTotalOverlap(rects[i], rects[j]);
        }
    }

    return area;
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
    int t; cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        countOverlap = 0;
        int k; cin >> k;
        vector<rectangle> rects(k);
        for (int i = 0; i < k; i++) {
            cin>>rects[i].x>>rects[i].y>>rects[i].w>>rects[i].h;
        }
        long long area = calculate(rects, k);

        cout << "Case "<<tc<<": "<< area << endl;
        cout << "Overlap "<<tc<<": "<<countOverlap<<endl;
    }   
}