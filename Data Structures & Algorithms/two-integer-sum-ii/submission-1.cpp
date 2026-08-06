class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Your solution must use O(1) add space
        // no for hash, vector, etc.
        // 
        int left{ 0 };
        int right = numbers.size() - 1;

        while (1) {
            int addup = numbers[left] + numbers[right];
            if (addup == target)
                break;
            else if (addup > target ) {
                right -= 1;
            } else {
                left += 1;
            }
            
        }
        return {left += 1, right += 1};
    }
};
