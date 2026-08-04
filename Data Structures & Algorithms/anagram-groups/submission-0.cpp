#include <algorithm>
#include <iostream>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> hash_map;
        vector<vector<string>> answer;

        for (string s: strs) {
            string orgs = s;
            std::sort(s.begin(), s.end());
            hash_map[s].push_back(orgs);
        }

        int index = 0;
        for (auto& [key, value] : hash_map){
            answer.push_back(value);
        }
        
        // std::cout<< answer <<std::endl;
        return answer;
    }
};
