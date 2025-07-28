#include <vector>
#include <stack>
#include <algorithm>

class Solution {
public:
    std::vector<int> nextLargerElement(std::vector<int>& arr) {
        int n = arr.size();
        std::vector<int> result(n);
        std::stack<int> s;

        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && s.top() <= arr[i]) {
                s.pop();
            }
            if (s.empty()) {
                result[i] = -1;
            } else {
                result[i] = s.top();
            }
            s.push(arr[i]);
        }
        return result;
    }
};
