class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<long long, int> sumMap; // Store cumulative sum and its first occurrence index
        long long sum = 0; // Use long long to avoid overflow
        int maxLen = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            
            // If sum equals k, update maxLen with the current length
            if(sum == k) {
                maxLen = max(maxLen, i + 1);
            }
            
            // Check if there is a subarray with sum (sum - k)
            long long diff = sum - k;
            if(sumMap.find(diff) != sumMap.end()) {
                maxLen = max(maxLen, i - sumMap[diff]);
            }
            
            // Only add sum to map if it's not already present
            if(sumMap.find(sum) == sumMap.end()) {
                sumMap[sum] = i;
            }
        }
        
        return maxLen;
    }
};
