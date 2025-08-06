class Solution {
  public:
    int minDifference(vector<string> &arr) {
        vector<int> times;
        for (string &t : arr) {
            int h = stoi(t.substr(0, 2));
            int m = stoi(t.substr(3, 2));
            int s = stoi(t.substr(6, 2));
            times.push_back(h * 3600 + m * 60 + s);
        }
        sort(times.begin(), times.end());
        int minDiff = INT_MAX;
        for (int i = 1; i < times.size(); ++i) {
            minDiff = min(minDiff, times[i] - times[i - 1]);
        }
        int day = 24 * 3600;
        minDiff = min(minDiff, day - times.back() + times[0]);
        return minDiff;
    }
};
