class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int mid = nums[n/2];
        
        int sum = 0;
        for (int X: nums) {
            sum += abs(mid-X);
        }
        
        return sum;
    }
};