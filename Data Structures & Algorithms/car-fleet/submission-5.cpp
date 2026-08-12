/*
1) Bruteforce
modeling every time
time : O(N * time) = O(N) * O (target / last position(speed)
space :  O(N)

2) Stack?
- Sort by position
- Starting from front, insert on stack if can be fleeted.
- time : O(NlogN) + O*(N)
- IF front is faster or same speed : pop
- IF front is slower & might be trapped
*/

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<vector<int>> arr;
        int ans = 0;

        for (int i = 0; i < position.size(); i++) {
            arr.push_back({position[i], speed[i]});
        }

        sort(arr.begin(), arr.end(),
            [](const vector<int>& a, const vector<int>& b) {
                return a[0] > b[0];
            }
        );

        stack<double> stacked{};
        

        for (vector<int> v : arr) {
            double time = static_cast<double> (target - v[0]) / v[1] ;
            if (!stacked.size()){
                stacked.push(time);
            } else {
                double topTime = stacked.top();

                if (topTime >= time){ // if front car is slower => add to fleet
                    stacked.push(topTime);
                } else {
                    std::cout<<stacked.top()<<std::endl;
                    stacked = {};
                    ans += 1;
                    stacked.push(time);
                }
            }
        }

        if (!stacked.empty()){
            ans += 1;
        }

        return ans;
    }
};
