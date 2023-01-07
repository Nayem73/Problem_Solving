class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size();
        int cnt = 0;
        for (int x: nums1) {
            for (int y: nums2) {
                for (int z: nums3) {
                    for (int q: nums4) {
                        if (x+y+z+q == 0) cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};