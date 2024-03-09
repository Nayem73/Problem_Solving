//if the input consists of only one type of brackets, we could use + - but
//since we have 3 types of brackets, we can't use + - because it would fail in tests like: "([)]"
//so we need to use stack here

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        
        for (int i = 0; i < (int)s.length(); i++) {
            if (s[i] == ')') {
                if (stack.empty()) return false;
                if (stack.top() != '(') return false;
                stack.pop();
            } else if (s[i] == '}') {
                if (stack.empty()) return false;
                if (stack.top() != '{') return false;
                stack.pop();
            } else if (s[i] == ']') {
                if (stack.empty()) return false;
                if (stack.top() != '[') return false;
                stack.pop();
            } else {
                stack.push(s[i]);
            }
        }
        if (stack.empty()) return true;
        return false;
    }
};