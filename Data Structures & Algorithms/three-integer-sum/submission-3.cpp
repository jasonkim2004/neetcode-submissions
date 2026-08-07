/* 
1) BruteForce = nC3 = O(N^3) , Space : O(1)
2) sort + find 2.
O(NlogN) 
+ BF? O(N^2)
+ 
*/


class Solution {
public:


    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;

        std::sort(nums.begin(), nums.end());
        
        int n = nums.size();
        for (int i = 0; i < n; i++){
            if (i > 0 && nums[i] == nums[i-1]) 
                continue;
            int left = i + 1;
            int right = n - 1;
           
            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];
                if (sum < 0) {
                    left++;
                } else if (sum > 0) {
                    right--;
                } else {
                    answer.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;
                    // skip same lefts.
                    while ((left < right) && (nums[left] == nums[left-1])) {
                        left++;
                    }
                    while ((left < right) && (nums[right] == nums[right+1])) {
                        right--;
                    }
                }

            }
        }
        
        return answer;
    }
};
