class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string out;
        string tmp;
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                reverse(tmp.begin(), tmp.end());
                out += tmp;
                out += ' ';
                tmp.erase();
                continue;
            }
            tmp+=s[i];
        }
        
        if (!tmp.empty()) {
            reverse(tmp.begin(), tmp.end());
            out += tmp;
        }
        
        return out;
    }
};