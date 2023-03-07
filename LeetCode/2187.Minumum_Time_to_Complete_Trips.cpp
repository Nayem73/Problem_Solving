class Solution {
    bool bs(long long mid, vector<int>& time, long long totalTrips) {
        long long cnt = 0;
        for (int X: time) {
            cnt += mid/X;
        }
        if (cnt >= totalTrips) return true;
        return false;
    }
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long lo = 0, hi = 1e14;
        long long ans = 0;
        while (lo <= hi) {
            long long mid = (lo+hi)/2LL;
            if (bs(mid, time, totalTrips)) {
                ans = mid;
                hi = mid - 1;
            }
            else lo = mid+1;
        }
        
        return ans;
    }
};