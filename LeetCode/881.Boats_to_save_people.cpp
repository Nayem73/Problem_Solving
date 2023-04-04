class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int cnt = 1;
        long long sum = 0;
        int n = people.size();
        for (int i = 0; i < n; i++) {
            if (sum + people[i] > limit) {
                sum = people[i];
                cnt++;
            }
            else sum += people[i];
        }

        return cnt;
    }
};