class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st{};
        
        for (char c : s) {
            if ((st.size() >= 1) && 
                ((st.top() == '{' && c == '}' )
                || (st.top() == '(' && c == ')' )
                || (st.top() == '[' && c == ']' ))
                ){
                st.pop();
            } else {
                st.push(c);
            }
        }
        if (st.size() == 0){
            return true;
        } else {
            return false;
        }

    }
};
