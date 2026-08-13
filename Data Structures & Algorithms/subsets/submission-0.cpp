/*
recursion - 2^N
*/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer{};
        vector<int> subset{};
        for (int bits = 0; bits < pow(2, nums.size()); bits++){
            subset = {};
            for (int i = 0; i < nums.size(); i++) {
                int bit = (bits >> i) & 1;
                if(bit) 
                    subset.push_back(nums[i]);
            }
            answer.push_back(subset);
        }

        return answer;
    }
};
