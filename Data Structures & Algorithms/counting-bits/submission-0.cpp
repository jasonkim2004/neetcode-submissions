// NlogN?
// N < 1000
 
class Solution {
public:
    int countOnes(int a) {
        int count(0);
        while (a) {
            count += a % 2;
            a /= 2;
        }
        return count;
    }

    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){
            // std::cout<< "countOnes(i) = " << countOnes(i) << endl;
            ans.push_back(countOnes(i));
        }
        return ans;
    }
};
