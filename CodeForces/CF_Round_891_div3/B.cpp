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

void main_fnc() {
  //cout << "ok\n";
}

int maximize_number(int x) {
    std::string x_str = std::to_string(x);
    int n = x_str.length();
    std::vector<int> new_digits(n);

    for (int i = n - 1; i >= 0; --i) {
        if (new_digits[i] >= 5) {
            new_digits[i] = 0;  // Round down to 0 (after adding 1)
            if (i > 0) {
                new_digits[i - 1] += 1;  // Carry over to the previous digit
            }
        }

        if (new_digits[i] == 10) {
            int j = i;
            while (j >= 0 && new_digits[j] == 9) {
                new_digits[j] = 0;
                --j;
            }
            if (j >= 0) {
                new_digits[j] += 1;
            }

            break;  // No need to continue checking to the left
        }
    }

    int result = 0;
    for (int digit : new_digits) {
        result = result * 10 + digit;
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
  int t; cin >> t; while (t--) {
string x;
        cin >> x;

        int k = -1; // Position of the first digit that is greater than or equal to 5

        for (int i = 0; i < x.size(); ++i) {
            if (x[i] >= '5') {
                k = i;
                break;
            }
        }

        if (k == -1) {
            cout << x << endl;
        } else {
            for (int i = k; i < x.size(); ++i) {
                if (x[i] >= '5') {
                    k = i;
                }
            }

            for (int i = 0; i <= k; ++i) {
                if (i == k && x[i] == '9') {
                    while (i >= 0 && x[i] == '9') {
                        x[i] = '0';
                        i--;
                    }
                    if (i >= 0) {
                        x[i]++;
                    } else {
                        x = "1" + x;
                    }
                } else if (x[i] >= '5') {
                    x[i] = '0';
                    if (i == k) {
                        if (i + 1 < x.size()) {
                            x[i + 1]++;
                        } else {
                            x += '1';
                        }
                    } else {
                        x[i + 1]++;
                    }
                }
            }

            cout << x << endl;
        }

  }
}