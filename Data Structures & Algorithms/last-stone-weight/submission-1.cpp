// Time complexity:O(nlogn)
// Space complexity:O(n)

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // MaxHeap with pairs
        std::priority_queue<int> maxHeap;

        for (int s : stones)
            maxHeap.push(s);

        while (maxHeap.size() > 1) {
            int stone1 = maxHeap.top();
            maxHeap.pop();
            int stone2 = maxHeap.top();
            maxHeap.pop();

            maxHeap.push(abs(stone1 - stone2));
        }

        return maxHeap.top();
    }
};
