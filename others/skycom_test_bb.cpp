#include <bits/stdc++.h>
using namespace std;

long long fnc(string& num, int st, int n) {
    long long p = 1;
    for (int i = st; i < st + n; ++i) {
        p *= (num[i] - '0');
    }
    return p;
}

int main() {
    int t; cin >> t; 
    int tc2 = 0;
    for (int tc = 1; tc <= t; tc++) {
        int n, k;
        string num;

        cin >> n >> k;
        cin >> num;

        long long maxP = 0;
        long long minP = LLONG_MAX;

        for (int i = 0; i <= k - n; ++i) {
            long long p = fnc(num, i, n);

            if (p != 0) {
                maxP = max(maxP, p);
                minP = min(minP, p);
            }
        }

        if (maxP <= 0) maxP = 1;
        if (minP == LLONG_MAX || minP <= 0) minP = 1;

        if (tc == t) {
            cout << "Case "<< ++tc2 <<":" << endl;
            cout << maxP << endl << minP;
        } else {
          cout << "Case "<< ++tc2 <<":" << endl;
          cout << maxP << endl << minP << endl << endl;
        }
    }
}