#include <bits/stdc++.h>
using namespace std;

const long long MAX_N = 1e5;
const long long MAX_A = 1e6;

bool is_prime[MAX_A + 1];
long long almost_prime_count[MAX_N + 1];
vector<long long> prime_factors_count[MAX_N + 1];

// Sieve of Eratosthenes to find prime numbers
void sieve() {
    for (long long i = 2; i <= MAX_A; i++) {
        is_prime[i] = true;
    }

    for (long long i = 2; i * i <= MAX_A; i++) {
        if (is_prime[i]) {
            for (long long j = i * i; j <= MAX_A; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

long long longest_subarray_with_almost_prime_factors(const vector<long long>& arr, long long K) {
    long long n = arr.size();
    long long left = 0;
    long long max_length = 0;
    long long almost_prime_count = 0;

    for (long long right = 0; right < n; right++) {
        long long current_number = arr[right];

        for (long long factor : prime_factors_count[current_number]) {
            if (is_prime[factor]) {
                almost_prime_count++;
            }
        }

        while (almost_prime_count >= K) {
            for (long long factor : prime_factors_count[arr[left]]) {
                if (is_prime[factor]) {
                    almost_prime_count--;
                }
            }
            left++;
        }

        max_length = max(max_length, right - left + 1);
    }

    return max_length;
}

int main() {
    sieve();

    long long T;
    cin >> T;

    for (long long case_num = 1; case_num <= T; case_num++) {
        long long N, K;
        cin >> N >> K;
        vector<long long> A(N);

        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }

        for (long long i = 1; i <= N; i++) {
            prime_factors_count[i].clear();
        }

        for (long long i = 0; i < N; i++) {
            long long current_number = A[i];

            for (long long factor = 2; factor <= current_number; factor++) {
                if (current_number % factor == 0) {
                    prime_factors_count[i + 1].push_back(factor);
                    while (current_number % factor == 0) {
                        current_number /= factor;
                    }
                }
            }
        }

        long long result = longest_subarray_with_almost_prime_factors(A, K);
        cout << "Case " << case_num << ": " << result << endl;
    }

    return 0;
}
