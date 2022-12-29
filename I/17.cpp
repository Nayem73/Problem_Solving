//BISMILLAHIR-RAHMANIR-RAHIM//
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCALM
#include <C:/I/rje.hpp>
#endif
#define endl '\n'
#define fast_io {ios_base::sync_with_stdio(0); cin.tie(0);}
#define ff first
#define ss second

vector<int> store;
vector<bool> primes(100007);

void sieve(int to) {
	for (int i = 2; i <= to; i++) {
		if (primes[i]) continue;
		for (int j = i+i; j <= to; j += i) {
			primes[j] = true;
		}
		store.push_back(i);
	}
}

int main() {
//ALHAMDULILLAHI-RABBIL-ALAMIN//
#ifdef LOCALM
freopen("1in", "r", stdin);
freopen("1out", "w", stdout);
#endif
fast_io;
//-------------------------------	
		//SUBHANALLAH//
//-------------------------------
	sieve(100);
	rje()<< store;
	cout << primes[555];
	int h;
}