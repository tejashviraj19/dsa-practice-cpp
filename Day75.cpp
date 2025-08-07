class Solution {
  public:
    int getLPSLength(string &s) {
        int n = s.size();
        if (n == 0) {
            return 0;
        }
        vector<int> lps(n, 0);
        int length = 0; // length of the previous longest prefix suffix
        int i = 1;
        while (i < n) {
            if (s[i] == s[length]) {
                length++;
                lps[i] = length;
                i++;
            } else {
                if (length != 0) {
                    length = lps[length - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps[n - 1];
    }
};
