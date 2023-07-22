class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int cnt = 1;
        if (n == 1) return false;
        for (int i = 0; i < n; i++) {
            if (i == n - 1 && nums[i] != nums[i-1]) return false;
            else if (i == n-1) break;
            if (nums[i] != cnt) return false;
            cnt++;
        }
        return true;
    }
};