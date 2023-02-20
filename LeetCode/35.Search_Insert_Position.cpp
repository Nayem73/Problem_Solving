class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n-1;
        int got = -1;
        while (hi >= lo) {
            int mid = (lo+hi)/2;
            if (nums[mid] == target) {
                got = mid;
                break;
            }
            else if (nums[mid] > target) hi--;
            else if (nums[mid] < target) lo++;
        }
        
        if (got != -1) lo = got;
        cout << lo << ' '<< hi << endl;
        return lo;
    }
};
//essence of binary search:
//[1,3,5,6]
//8
//for the above input, lo = 4, hi = 3
//why cz if target is greater than the last(largest) element in array then keep going lo!
//so the ans would be lo, not hi in this problem.