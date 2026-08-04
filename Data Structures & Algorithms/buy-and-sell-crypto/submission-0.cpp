class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int answer { 0 };
        int val { 0 };
        for (int a = 0; a < prices.size(); a++) {
            for (int b = a; b < prices.size(); b++) {
                val = prices[b] - prices[a];
                if (val > answer) {
                    answer = val;
                }
            }
        }
        return answer;
    }

};
