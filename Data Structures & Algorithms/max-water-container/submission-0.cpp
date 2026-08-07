/*
1) Brute force : O(N^2)
2) 2 pointer
area = (l-r) * min(heights[l], heights[r]);
l+1 : 1* in 변경점만큼 변함.
*/

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int r = heights.size() - 1;
        int l = 0;

        int ans = (r-l) * min(heights[l], heights[r]);

        while (l < r){
            int area = (r-l) * min(heights[l], heights[r]);
            ans = max(area,ans);
            if (heights[l] < heights[r]){
                l += 1;
            } else { // h[r]>=h[l]
                r -= 1;
            }
        }
        return ans;
    }
};
