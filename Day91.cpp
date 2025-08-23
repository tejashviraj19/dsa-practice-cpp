class Solution {
  public:
    bool canMake(vector<int>& arr, int day, int k, int m) {
        int n = arr.size();
        int count = 0, bouquets = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= day) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0; // reset after making bouquet
                }
            } else {
                count = 0; // break in adjacency
            }
        }
        return bouquets >= m;
    }

    int minDaysBloom(vector<int>& arr, int k, int m) {
        long long need = 1LL * m * k;
        if (need > arr.size()) return -1; // not enough flowers
        
        int low = *min_element(arr.begin(), arr.end());
        int high = *max_element(arr.begin(), arr.end());
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canMake(arr, mid, k, m)) {
                ans = mid;
                high = mid - 1; // try smaller days
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

