class Solution {
    set<vector<int>> ans;
    void findCombinations(vector<int>& candidates, int target, int curSum, vector<int> curCandidates) {
        if (curSum > target) return;
        if (curSum == target) {
            sort(curCandidates.begin(), curCandidates.end());
            ans.insert(curCandidates);
            return;
        }
        
        for (int i = 0; i < (int)candidates.size(); i++) {
            curCandidates.push_back(candidates[i]);
            findCombinations(candidates, target, curSum + candidates[i], curCandidates);
            curCandidates.pop_back();
        }    
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        findCombinations(candidates, target, 0, {});
        vector<vector<int>> ret;
        for (vector<int> curVector : ans) {
            ret.push_back(curVector);
        }
        
        return ret;
    }
};