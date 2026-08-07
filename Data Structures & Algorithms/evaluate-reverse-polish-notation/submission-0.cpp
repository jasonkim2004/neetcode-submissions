class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> stOperand;
        std::stack<char> stOperator;

        for (string s : tokens) {
            if (s == "+") {
                int r = stOperand.top();
                stOperand.pop();
                int l = stOperand.top();
                stOperand.pop();
                stOperand.push(l + r);
            } else if ( s == "-") {
                int r = stOperand.top();
                stOperand.pop();
                int l = stOperand.top();
                stOperand.pop();
                stOperand.push(l - r);
            } else if ( s == "*") {
                int r = stOperand.top();
                stOperand.pop();
                int l = stOperand.top();
                stOperand.pop();
                stOperand.push(l * r);
            } else if ( s == "/") {
                int r = stOperand.top();
                stOperand.pop();
                int l = stOperand.top();
                stOperand.pop();
                stOperand.push(l / r);
            } else {
                /* numbers */
                stOperand.push(stoi(s));
            }
        }
            
        return stOperand.top();
    }
};
