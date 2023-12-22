#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;
	v.push_back(45);
	v.push_back(34);
	v.pop_back();
	v.push_back(46);

	for (auto X: v) cout << X << ' ';
}