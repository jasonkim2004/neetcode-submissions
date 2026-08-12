/*
1) bruteforce - traverse

2) binary serach 
element that has larger left element.
if not,check rightindex - check whether kept aligned on right side.
*/

class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            // 오른쪽 부분이 정렬된 경우: 최솟값은 왼쪽에
            if (nums[mid] < nums[right]) {
                right = mid;  // mid가 최솟값일 수 있음
            } 
            // 왼쪽 부분이 정렬된 경우: 최솟값은 오른쪽에
            else {
                left = mid + 1;  // mid는 최솟값이 아님
            }
        }
        
        return nums[left];
    }
};


