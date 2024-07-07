class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int lo = 0, hi = n-1;
        vector<int> ans;
        
        while (lo < hi) {
            if (numbers[lo] + numbers[hi] == target) {
                ans.push_back(lo+1);
                ans.push_back(hi+1);
                break;
            }
            if (numbers[lo] + numbers[hi] < target) {
                lo++;
            } else {
                hi--;
            }
        }
        return ans;
    }
};