#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int,int> mp;
    mp.insert({2,3});
    mp.insert({5,6});
    mp.insert({2,9});

    for (auto X: mp) {
        cout << X.first << ' '<< X.second << endl;
    }
}
