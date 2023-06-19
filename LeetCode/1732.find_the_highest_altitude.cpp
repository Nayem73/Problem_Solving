class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int out = gain[0];
        for (int i = 1; i < (int)gain.size(); i++) {
            gain[i] = gain[i-1] + gain[i];
            out = max(out, gain[i]);
        }
        if (out < 0) out = 0;
        return out;
    }
};