// 1. Brute force : O(N^2)
// 2. Sort and traverse from both sides O(NlogN) + O(N)
// 3. insert into set and traverse O(N) + 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        vector<int> ans;
        for(int i = 0; i< nums.size(); i++) {
            

            if (numMap.find(target - nums[i]) != numMap.end()) {
                return {numMap[target - nums[i]], i};
            }
            numMap[nums[i]] += i;
        }

        return {};
    }
};
