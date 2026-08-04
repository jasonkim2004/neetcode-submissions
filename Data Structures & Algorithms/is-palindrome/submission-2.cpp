class Solution {
public:
    bool isPalindrome(string s) {
        string check {};
        for (char c : s) {
            if ('A' <= c && c <= 'Z') {
                check.push_back(c);
            }
            else if ('a' <= c && c <= 'z') {
                check.push_back(c - ('a' - 'A'));
            }
            else if ('0' <= c && c <= '9') {
                check.push_back(c);
            }
        }
        check.push_back('\n');

        int start {0};
        int end = check.length() - 2; // before \n

        if (check[0] == '\n'){
            return true;
        }

        for (int i = 0; i < end / 2 + 1; i++){
            if ((check[start+i] == check[end-i]) || (check[start+i] == check[end-i] + 27) || (check[start+i] == check[end-i]))
                continue;
            else
                return false;
        }
        
        return true;
    }
};
