class Solution {
public:
    bool checkSameHash(
        unordered_map <char, int> A, 
        unordered_map <char, int> B) {

        for( auto& [key, value] : A) {
            if (B[key] != value) {
                return false;
            }
        }
        return true;
    }


    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        unordered_map <char, int> checkHash {};
        unordered_map <char, int> substringHash {};

        for (int i = 0; i < s1.size(); i++) {
            checkHash[s1[i]] += 1;
            substringHash[s2[i]] += 1;
        }

        for(int i = 0; i < s2.size() - s1.size() + 1; i++) {
            if (i != 0 ) {
                // if (substringHash[s2[i]] != 0)
                substringHash[s2[i - 1]] -= 1;
                substringHash[s2[i + s1.size() - 1]] += 1;
            }

            if (checkSameHash(checkHash, substringHash))
                return true;
        }

        return false;
    }
};
