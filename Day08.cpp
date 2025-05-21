//finding the k-th smallest number in an m x n multiplication table
class Solution {
  public:
    int kthSmallest(int m, int n, int k) {
        auto countLessEqual = [&](int x) {
            int count = 0;
            for (int i = 1; i <= m; ++i) {
                count += min(x / i, n);  // Each row has values i, 2i, ..., ni
            }
            return count;
        };

        int low = 1, high = m * n;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (countLessEqual(mid) < k) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
};
