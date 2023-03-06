class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;
        for (string X: words) {
            mp[X]++;
        }

        multimap<int, string, greater<int>> out;
        for (auto X: mp) {
            //out[X.second] = X.first;
            out.insert({X.second, X.first});
        }

        int cnt = 0;
        vector<string> real_out;
        for (auto X: out) {
            ++cnt;
            real_out.push_back(X.second);
            if (cnt == k) break;
        }

        for (auto X: out) {
            cout << X.first << ' '<<X.second<<endl;
        }

        return real_out;
    }
};