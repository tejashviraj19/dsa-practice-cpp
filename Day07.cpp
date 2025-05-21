class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;  // One number missing
        long long expected_sum = 1LL * n * (n + 1) / 2;  // Use 1LL to force long long arithmetic
        long long actual_sum = 0;

        for (int num : arr) {
            actual_sum += num;
        }

        return (int)(expected_sum - actual_sum);
    }
};
