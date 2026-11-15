class Solution {
public:
    int hammingWeight(uint32_t n) {
        unsigned int count = 0;
        while (n) {
            if (n % 2 != 0) { 
                count++;
            }
            n /= 2;
        }
        return count;
    }
};
