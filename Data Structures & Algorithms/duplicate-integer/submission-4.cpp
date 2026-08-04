class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hashmap;
        for(int i : nums){
            if (hashmap[i] == 1) {
                return true;
            }
            hashmap[i] = 1;
        }
        return false;
    }
};
