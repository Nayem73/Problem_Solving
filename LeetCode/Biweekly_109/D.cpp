class Solution {
const int MOD = 1000000007;

int countWays(int n, int x) {
    vector<int> powers;
    int curr_power = 1;
    while (true) {
        int next_power = pow(curr_power, x);
        if (next_power > n)
            break;
        powers.push_back(next_power);
        curr_power++;
    }

    int m = powers.size();

    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < m; i++) {
        for (int j = n; j >= powers[i]; j--) {
            dp[j] = (dp[j] + dp[j - powers[i]]) % MOD;
        }
    }

    return dp[n];
}
public:
    int numberOfWays(int n, int x) {
        return countWays(n, x);
    }
};