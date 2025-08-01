#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int longestSubarray(std::vector<int>& arr, int k) {
        int n = arr.size();
        if (n == 0) {
            return 0;
        }

        std::vector<int> transformed_arr(n);
        for (int i = 0; i < n; ++i) {
            if (arr[i] > k) {
                transformed_arr[i] = 1;
            } else {
                transformed_arr[i] = -1;
            }
        }

        int max_len = 0;
        int current_sum = 0;
        std::unordered_map<int, int> sum_map;
        sum_map[0] = -1;

        for (int i = 0; i < n; ++i) {
            current_sum += transformed_arr[i];

            if (current_sum > 0) {
                max_len = std::max(max_len, i + 1);
            }

            if (sum_map.count(current_sum - 1)) {
                max_len = std::max(max_len, i - sum_map[current_sum - 1]);
            }
            
            if (sum_map.find(current_sum) == sum_map.end()) {
                sum_map[current_sum] = i;
            }
        }

        return max_len;
    }
};
