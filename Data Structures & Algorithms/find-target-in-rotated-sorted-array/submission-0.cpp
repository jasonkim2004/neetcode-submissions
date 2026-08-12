/*
1) find left / right and conduct search

*/

class Solution {
   public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] < nums[right]) {
                right = mid;
            }

            else {
                left = mid + 1;
            }
        }

        return left;
    }

int findTarget(vector<int>::iterator begin,
               vector<int>::iterator end,
               int target) {
    
    int left = 0;
    int right = end - begin - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (*(begin + mid) == target) {
            return mid;
        } else if (*(begin + mid) < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

    int search(vector<int>& nums, int target) {
        int cut = findMin(nums);

        int ans = findTarget(nums.begin(), nums.begin() + cut, target);
        if (ans != -1) return ans;

        ans = findTarget(nums.begin() + cut, nums.end(), target);
        if (ans != -1)
            return ans + cut;
        else
            return ans;  // regardless of -1 or not
    }
};
