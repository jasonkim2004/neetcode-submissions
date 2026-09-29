class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count(0);
        while (n) {
            // std::cout << (n & 1) << endl;
            count += (n & 1);
            n >>= 1;
        }
        return count;
    }
};
