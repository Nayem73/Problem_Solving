//BISMILLAHIR-RAHMANIR-RAHIM//
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCALM
#include <C:/I/rje.hpp>
#endif
#define fast_io {ios_base::sync_with_stdio(0); cin.tie(0);}
#define endl '\n'
<<<<<<< HEAD
=======
const int nax = 1e7;
vector<bool> primes(nax+3);
vector<int> s;

void sieve(int n) {
	for (int i = 2; i <= n; i++) {
		if (primes[i]) continue;
		s.push_back(i);
		for (int j = i+i; j <= n; j+=i) {
			primes[j] = true;
		}
	}
}
>>>>>>> 6159d138e4bad3b906a1aecac8971d2dbd5011ae

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
<<<<<<< HEAD
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
=======
	sieve(nax);
	while (true) {
		long long n; cin >> n;
		if (n == 0) break;
		if (n < 0) n *= -1;

		long long tmp = n, ans = 0, cnt = 0;
		for (int x : s) {
			if (x > tmp) break;
			if (tmp%x == 0) {
				ans = x; cnt++;
				while (tmp%x == 0) tmp /= x;
			}
		}
		if (tmp > 1) {cnt++; ans = tmp;}
		if (cnt < 2 || n <= 3) ans = -1;
		cout << ans << endl;
>>>>>>> 6159d138e4bad3b906a1aecac8971d2dbd5011ae
	}
}