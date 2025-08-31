class Solution {
  public:
    int sumOfModes(vector<int>& arr, int k) {
    unordered_map<int,int> freq; 
        map<int, set<int>> freq_count;
        int n = arr.size();
        int max_freq = 0;
        int sum = 0;

        auto add = [&](int x) {
            int old = freq[x];
            if (old > 0) {
                freq_count[old].erase(x);
                if (freq_count[old].empty()) freq_count.erase(old);
            }
            freq[x] = old + 1;
            freq_count[old+1].insert(x);
            max_freq = max(max_freq, old+1);
        };

        auto remove = [&](int x) {
            int old = freq[x];
            freq_count[old].erase(x);
            if (freq_count[old].empty()) freq_count.erase(old);
            if (--freq[x] > 0) {
                freq_count[old-1].insert(x);
            }
            if (freq_count[max_freq].empty()) max_freq--;
        };

        for (int i = 0; i < k; i++) add(arr[i]);
        sum += *freq_count[max_freq].begin();

        for (int i = k; i < n; i++) {
            remove(arr[i-k]);
            add(arr[i]);
            sum += *freq_count[max_freq].begin();
        }

        return sum;
    }
}; 
