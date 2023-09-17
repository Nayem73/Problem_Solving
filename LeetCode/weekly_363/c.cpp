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

bool canProduceKAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost, int kAlloys) {
    long long totalCost = 0;
    for (int K = 0; K < k; K++) {
        
        totalCost = 0;
        
        for (int i = 0; i < n; i++) {
            long long requiredMetal = (long long)composition[K][i] * kAlloys - stock[i];
            if (requiredMetal > 0) {
                totalCost += requiredMetal * cost[i];
            }
            rje()<<rji(kAlloys) rji(i) rji(requiredMetal) rji(totalCost);
        }
        if (totalCost <= budget) return true;
        
    }
        return false;
}

    int maxAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
         int left = 0;
        int right = 6; 
        int result = 0;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            cerr<<endl;
            if (canProduceKAlloys(n, k, budget, composition, stock, cost, mid)) {
                result = mid;
                left = mid + 1; 
            } else {
                right = mid - 1; 
            }
        }
        
        return result;
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
	     int n = 3;
    int k = 2;
    int budget = 15;
    vector<vector<int>> composition = {{1, 1, 1}, {1, 1, 10}};
    vector<int> stock = {0, 0, 100};
    vector<int> cost = {1, 2, 3};
    
    int result = maxAlloys(n, k, budget, composition, stock, cost);
    cout << result << endl;
}