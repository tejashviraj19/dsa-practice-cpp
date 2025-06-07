class Solution {
  public:
    // Helper function to merge two halves and count inversions
    int mergeAndCount(vector<int> &arr, int left, int mid, int right) {
        vector<int> temp;
        int i = left, j = mid + 1, inv_count = 0;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
                inv_count += (mid - i + 1);  // Count inversions
            }
        }

        // Copy remaining elements
        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= right) temp.push_back(arr[j++]);

        // Copy back to original array
        for (int k = left; k <= right; ++k) {
            arr[k] = temp[k - left];
        }

        return inv_count;
    }

    // Recursive merge sort and count inversions
    int mergeSortAndCount(vector<int> &arr, int left, int right) {
        if (left >= right) return 0;

        int mid = left + (right - left) / 2;
        int inv_count = 0;

        inv_count += mergeSortAndCount(arr, left, mid);
        inv_count += mergeSortAndCount(arr, mid + 1, right);
        inv_count += mergeAndCount(arr, left, mid, right);

        return inv_count;
    }

    // Main function to be called
    int inversionCount(vector<int> &arr) {
        return mergeSortAndCount(arr, 0, arr.size() - 1);
    }
};
