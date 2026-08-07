class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> hash;

        int left = 0;
        int result = 0;

        for (int right = 0; right < s.size(); right++) {
            while (hash.count(s[right])) {
                hash.erase(s[left]);
                left++;
            }

            hash.insert(s[right]);

            int currentLength = right - left + 1;
            result = max(result, currentLength);
        }

        return result;
    }
};