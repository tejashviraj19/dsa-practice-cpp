#include <vector>
#include <stack>

class Solution {
public:
    std::vector<int> calculateSpan(std::vector<int>& arr) {
        int n = arr.size();
        if (n == 0) {
            return {};
        }

        std::vector<int> span(n);
        std::stack<int> st;

        for (int i = 0; i < n; ++i) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }

            if (st.empty()) {
                span[i] = i + 1;
            } else {
                span[i] = i - st.top();
            }

            st.push(i);
        }

        return span;
    }
};
