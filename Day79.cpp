#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> minMaxCandy(std::vector<int>& prices, int k) {
        std::sort(prices.begin(), prices.end());
        int n = prices.size();
        
        long long min_cost = 0;
        int min_l = 0;
        int min_r = n - 1;
        while (min_l <= min_r) {
            min_cost += prices[min_l];
            min_l++;
            min_r -= k;
        }

        long long max_cost = 0;
        int max_l = 0;
        int max_r = n - 1;
        while (max_l <= max_r) {
            max_cost += prices[max_r];
            max_r--;
            max_l += k;
        }

        return {(int)min_cost, (int)max_cost};
    }
};
