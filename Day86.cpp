#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> farMin(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n, -1), suffixMin(n);
        
        suffixMin[n-1] = arr[n-1];
        for (int i = n-2; i >= 0; i--)
            suffixMin[i] = min(arr[i], suffixMin[i+1]);

        for (int i = 0; i < n; i++) {
            if (suffixMin[i] >= arr[i]) continue;
            int lo = i+1, hi = n-1, ans = -1;
            while (lo <= hi) {
                int mid = (lo + hi) / 2;
                if (suffixMin[mid] < arr[i]) {
                    ans = mid;
                    lo = mid + 1;   // go farther right
                } else {
                    hi = mid - 1;
                }
            }
            res[i] = ans;
        }
        return res;
    }
};
