class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        unsigned int zerocount = 0;
        vector<int> answer(nums.size());
        for (int num : nums){
            if(num != 0) {
                product *= num;
            } else {
                zerocount +=1 ;
            }
        }

        std::cout << product << std::endl;

        for (int i = 0; i<nums.size(); i++){
            if (zerocount >= 2) {
                answer[i] = 0;
            } else if (zerocount == 1){
                if (nums[i] == 0)
                    answer[i] = product;
                else
                    answer[i] = 0;
            } else { // zerocount == 0
                answer[i] = product / nums[i];
            }
        }
        return answer;
    }
};
