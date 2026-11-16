class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> countS(26, 0);
        vector <int> countT(26, 0);

        for (char c : s) {
            countS[c - 'a'] += 1;
        }
        for (char c : t) {
            countT[c - 'a'] += 1;
        }

        for(int i = 0; i <26; i++){
            if (countS[i] != countT[i])
                return false;
        }
        return true;
    }
};
