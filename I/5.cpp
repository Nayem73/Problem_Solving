// transform the following C++ code to Java:
#include<bits/stdc++.h>
using namespace std;


int main() {
	map<pair<int, bool>, string> mp;

	mp[{3, true}] = "dkfdkfj";

	for (auto X: mp) {
		cout << X.first.first << ' '<< X.first.second << ' '<< X.second;
	}
}