class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n), suff(n);
        
        for (int i = 0; i < n; i++) {
            pref[i] = (i?pref[i-1]:0) + nums[i];
        }
        for (int i = n-1; i >= 0; i--) {
            suff[i] = (i+1<n?suff[i+1]:0) + nums[i];
        }

        for (int i = 0; i < n; i++) {
            int left = (i?pref[i-1]:0);
            int right = (i+1<n?suff[i+1]:0);
            if (left == right) {
                return i;
            }
        }
        return -1;
        
    }
};