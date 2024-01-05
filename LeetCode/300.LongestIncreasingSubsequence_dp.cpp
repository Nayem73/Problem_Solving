class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n);
        for (int i = 0; i < n; i++) {
            dp[i] = max(dp[i], 1);
            for (int j = i+1; j < n; j++) {
                if (nums[j] > nums[i]) {
                    dp[j] = max(dp[j], dp[i]+1);
                }
            }
        }
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};