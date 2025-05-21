class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;  // Since one number is missing
        int total = n * (n + 1) / 2;
        
        int sum = 0;
        for (int num : arr) {
            sum += num;
        }
        
        return total - sum;
    }
};
