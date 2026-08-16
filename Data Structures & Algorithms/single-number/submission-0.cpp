// 정렬 후 순회 : O(nlogn) + O(logN)
// hash : O(N) / O(N)
// 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer = 0;
        for (int n : nums){
            answer = answer ^ n;
        }
        return answer;
    }
};
