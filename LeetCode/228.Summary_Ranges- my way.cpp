class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty()) return {};
        int n = nums.size();
        vector<string> ans;
        string curAns = to_string(nums[0]);
        string lastNum = curAns;
        
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1] + 1) {
                //curAns += "->";
                //curAns += to_string(nums[i]);
                lastNum = to_string(nums[i]);
            } else {
                if (lastNum != curAns) {
                    curAns += "->";
                    curAns += lastNum;
                }
                ans.push_back(curAns);
                curAns = to_string(nums[i]);
                lastNum = curAns;
            }
        }
        if (lastNum != curAns) {
            curAns += "->";
            curAns += lastNum;
        }
        ans.push_back(curAns);
        return ans;
    }
};