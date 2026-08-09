/* 
1) Brute Force : O(N*M)
2) Hash : O(N*M) while inserting.
3) flatten : O(N*M)

flatten 없이, index만 1d 에 맞춤
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        
        int rowLength = matrix[0].size();
        int colLength = matrix.size();
        int right = colLength * rowLength - 1;
        // std::cout << right << " " << matrix.size() << " " << matrix[0].size() << std::endl;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int y = mid / rowLength;
            int x = mid % rowLength;

            if (matrix[y][x] == target){
                return true;
            } else if (matrix[y][x] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }
};
