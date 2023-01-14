//BISMILLAHIR-RAHMANIR-RAHIM//
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCALM
#include <C:/I/rje.hpp>
#endif
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
	int t; cin >> t; while (t--) {
		long long n; cin >> n;
		bool flg = true;
		for (long long i = 0; i <= 1e6; i++) {
			long long x = i*i;
			long long y = n - x;
			if (x > n) {flg = false; break;}
			
			long long sqy = sqrt(y);
			if (sqy *sqy == y) break;
		}
		if (flg) cout << "Yes\n";
		else cout << "No\n";
	}
}