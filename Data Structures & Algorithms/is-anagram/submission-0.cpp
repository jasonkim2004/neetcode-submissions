class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> hashmapA, hashmapB;
        for (char i = 'a'; i<='z'; i++) {
            hashmapA[i] = 0;
            hashmapB[i] = 0;
        }
        for (char i : s){
            hashmapA[i] += 1;
        }
        for (char i : t){
            hashmapB[i] += 1;
        }
        for (char i = 'a'; i<='z'; i++) {
            if (hashmapA[i] != hashmapB[i]) {
                std::cout<<i<<"\n";
                return false;
            }
        }
        return true;
    }
};
