class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i = 0; i < (int)tokens.size(); i++) {
            if ((tokens[i][0] >= '0' && tokens[i][0] <= '9') || tokens[i].size() > 1) {
                int curNum = stoi(tokens[i]);
                st.push(curNum);
            } else {
                int numB = st.top(); st.pop();
                int numA = st.top(); st.pop();
                if (tokens[i] == "+") st.push(numA + numB);
                else if (tokens[i] == "-") st.push(numA - numB);
                else if (tokens[i] == "*") st.push(numA * numB);
                else if (tokens[i] == "/") st.push(numA / numB);
            }
        }
        
        return st.top();
    }
};