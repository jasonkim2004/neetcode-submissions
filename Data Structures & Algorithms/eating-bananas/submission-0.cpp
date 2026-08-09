/*
time for a pile.
eat all in h hours.
if rate = k :
time for eating a pile = pile[i] / k + (pile[i] % k)??;
minimum(k) = ?

h range <= 1,000,000,000
O(log (1,000,000,000))
*/

class Solution {
public:
    long long determineTime( vector<int>& piles, int rate){
        long long ans{0};
        for (int p : piles){
            ans += p / rate;

            if (p % rate){
                ans++;
            };
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        int bestanswer = right;
        while (left <= right) {
            int mid = left + (right-left) / 2;
            long long time = determineTime(piles, mid);

            if (time <= h) {
                bestanswer = mid;
                right = mid - 1;
            } else {
               left = mid + 1;
            }
        }
        return bestanswer;
    }
};
