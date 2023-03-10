class Solution {
    void reverse(int lo, int hi, vector<int>& nums) {
        while (lo < hi) {
            swap(nums[lo], nums[hi]);
            lo++; hi--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k%n;
        //if (k == 0) return;
        
        reverse(0, n-1, nums);
        
        reverse(0, k-1, nums);
        
        reverse(k, n-1, nums);
    }
};