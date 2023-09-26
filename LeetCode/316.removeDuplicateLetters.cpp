class Solution {
public:
    string removeDuplicateLetters(string s) {
        
    int n = s.size();
	vector<bool> visit(200);
	vector<int> occur(200);
	for (int i = 0; i < n; i++) {
		char ch = s[i];
		occur[ch-'a']++;
	}

	stack<char> op;

	for (int i = 0; i < n; i++) {
		 char ch = s[i];
		if (visit[ch - 'a']) {
            occur[ch - 'a']--;
            continue;
        }
        
		 while (!op.empty() && op.top() >= ch) {
		 	if (occur[op.top() - 'a'] == 1) break;
		 	visit[op.top() - 'a'] = false;             		 	         occur[op.top() - 'a']--;

		 	op.pop();
		 }
		 if (!visit[ch - 'a']) {
		 	op.push(ch);
		 	visit[ch - 'a'] = true;
		 }
	}

	string ans;
	while (!op.empty()) {
		ans.push_back(op.top());
		op.pop();
	}
	reverse(ans.begin(), ans.end());
    return ans;
	//for (auto x : ans) cout << x;
        
        
    }
};