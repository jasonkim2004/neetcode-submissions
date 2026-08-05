class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> num_count;
        for (int i=-1000; i<=1000; i++){
            num_count[i] = 0;
        }

        for (int n : nums) {
            num_count[n] += 1;
        }

        std::vector<std::pair<int, int>> counts;
        for (auto& [key, value] : num_count){
            counts.push_back({value, key});
        }

        std::sort(counts.rbegin(), counts.rend());
        
        vector<int> answer;
        for (int i = 0; i < k ; i++){
            answer.push_back({counts[i].second});
        }

        return answer;
    }
};
