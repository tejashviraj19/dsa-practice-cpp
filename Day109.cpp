class Solution {
public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        sort(x.begin(), x.end(), greater<int>());
        sort(y.begin(), y.end(), greater<int>());
        int h_cuts = 1;
        int v_cuts = 1;
        long long totalCost = 0;
        int i = 0, j = 0;
        while (i < x.size() && j < y.size()) {
            if (x[i] >= y[j]) {
                totalCost += (long long)x[i] * v_cuts;
                h_cuts++;
                i++;
            } else {
                totalCost += (long long)y[j] * h_cuts;
                v_cuts++;
                j++;
            }
        }
        while (i < x.size()) {
            totalCost += (long long)x[i] * v_cuts;
            i++;
            h_cuts++;
        }
        while (j < y.size()) {
            totalCost += (long long)y[j] * h_cuts;
            j++;
            v_cuts++;
        }
        return (int)totalCost;
    }
};
