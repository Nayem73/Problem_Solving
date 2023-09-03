class Solution {
public:
    int uniquePaths(int n, int m) {
        vector<vector<int>> dp(n, vector<int> (m));
        dp[0][0] = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dp[i][j] += (j?dp[i][j-1]:0) + (i?dp[i-1][j]:0);
            }
        }        
        return dp[n-1][m-1];
    }
};