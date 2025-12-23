class Solution {
  public:
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        vector<int> ans;
        sort(arr.begin(), arr.end());

        for (auto &q : queries) {
            int st = q[0], end = q[1];

            int left = lower_bound(arr.begin(), arr.end(), st) - arr.begin();
            int right = upper_bound(arr.begin(), arr.end(), end) - arr.begin();

            ans.push_back(right - left);
        }

        return ans;
    }
};
