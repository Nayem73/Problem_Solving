class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int n = paragraph.size();
        for (int i = 0; i < n; i++) {
            if (paragraph[i] >= 'A' && paragraph[i] <= 'Z') {
                paragraph[i] += ('a' - 'A');
            }
        }
        
        map<string, int>bannedmp;
        for (string x : banned) {
            bannedmp[x]++;
        }
        
        string curWord;
        map<string, int> mp;
        for (int i = 0; i < n; i++) {
            if (paragraph[i] >= 'a' && paragraph[i] <= 'z' && i != n-1) {
                curWord += paragraph[i];
                //cout << i << ' '<< curWord << endl;
            } else {
                if (curWord.empty()) continue;
                if (i == n-1 && paragraph[i] >= 'a' && paragraph[i] <= 'z') curWord += paragraph[i];
                //cout << curWord << endl;
                if (bannedmp.find(curWord) == bannedmp.end()) {
                    mp[curWord]++;
                }
                curWord.erase();
            }
        }
        
        int mostCount = 0;
        string ans;
        for (auto x : mp) {
            //cout << x.first << ' '<< x.second << endl;
            if (x.second > mostCount) {
                ans = x.first;
                mostCount = x.second;
            }
        }
        return ans;
        
    }
};