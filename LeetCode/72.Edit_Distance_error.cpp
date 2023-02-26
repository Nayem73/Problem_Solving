class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size(), m =  word2.size();
        const int inf = 2e9;
        vector<vector<int>> dp(n, vector<int> (m, inf));
        dp[0][0] = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dp[i][j] = min({(i&&j?dp[i-1][j-1]:inf), (i?dp[i-1][j]:inf), (j?dp[i][j-1]:inf)}) + word1[i]==word2[j];
            }
        }
        
        return dp[n-1][m-1];
        
    }
};