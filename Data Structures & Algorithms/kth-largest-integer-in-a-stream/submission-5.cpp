class KthLargest {
private:
    int size = 0;
public:
    std::priority_queue<
        int,
        std::vector<int>,
        std::greater<int>
    > minHeap;

    KthLargest(int k, vector<int>& nums) {
        size = k;
        for (int num : nums) {
            minHeap.push(num);
            while (minHeap.size() > k) {
                minHeap.pop();
            }
        }
    }

    int add(int val) {
        minHeap.push(val);
        while (minHeap.size() > size) {
            minHeap.pop();
        }
        return minHeap.top();
    }
};