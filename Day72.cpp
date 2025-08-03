class Solution {
  public:
    int maxRectSum(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();

        int maxSum = INT_MIN;

        for (int i = 0; i < n; ++i) {
            vector<int> currentColumnSum(m, 0);
            for (int j = i; j < n; ++j) {
                for (int k = 0; k < m; ++k) {
                    currentColumnSum[k] += mat[j][k];
                }

                int currentMax = INT_MIN;
                int currentSum = 0;
                for (int k = 0; k < m; ++k) {
                    currentSum += currentColumnSum[k];
                    if (currentSum > currentMax) {
                        currentMax = currentSum;
                    }
                    if (currentSum < 0) {
                        currentSum = 0;
                    }
                }
                if (currentMax > maxSum) {
                    maxSum = currentMax;
                }
            }
        }
        
        // Handle case where all numbers are negative
        if (maxSum == 0) {
            int maxSingle = INT_MIN;
            for(int i = 0; i < n; ++i) {
                for(int j = 0; j < m; ++j) {
                    if (mat[i][j] > maxSingle) {
                        maxSingle = mat[i][j];
                    }
                }
            }
            if (maxSingle < 0) {
                return maxSingle;
            }
        }

        return maxSum;
    }
};
