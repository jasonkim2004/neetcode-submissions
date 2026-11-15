class Solution {
public:

    uint32_t reverseBits(uint32_t n) {
        vector<int> arrayN;
        int ans(0);
        for (int i = 0; i < 32; i++) {
            arrayN.push_back( n % 2 );
            n /= 2;
        }


        for (int i = 0; i < 32; i++) {
            ans += arrayN[i] << (31 - i);
        }

        return ans;
    }
};
