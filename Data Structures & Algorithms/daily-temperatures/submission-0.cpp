/*
1) BF : O(N^2)
2) stack : <value, index>
result.push_back();
Stack on stack, pop when larger int is about to be pushed.
*/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<pair<int, int>> st{}; // value, index;


        for(int i = 0; i < temperatures.size(); i++){
            int temp = temperatures[i];
            
            if (st.empty()){
                st.push({temp, i});
            } else {
                while (!st.empty() && st.top().first < temp) {
                    result[st.top().second] = i - st.top().second;
                    st.pop();
                }
                st.push({temp, i});
            }
        }
        // while (!st.empty()) {
        //     result[st.top().second] = 0;
        //     st.pop();
        // }

        return result;
    }
};
