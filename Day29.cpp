class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size(), m = b.size();
        int gap = nextGap(n + m);

        while (gap > 0) {
            int i = 0, j = gap;
            while (j < n + m) {
                // First element
                int val1 = (i < n) ? a[i] : b[i - n];
                // Second element
                int val2 = (j < n) ? a[j] : b[j - n];

                if (val1 > val2) {
                    if (i < n && j < n)
                        swap(a[i], a[j]);
                    else if (i < n && j >= n)
                        swap(a[i], b[j - n]);
                    else
                        swap(b[i - n], b[j - n]);
                }
                i++;
                j++;
            }
            gap = nextGap(gap);
        }
    }

  private:
    int nextGap(int gap) {
        if (gap <= 1) return 0;
        return (gap + 1) / 2;
    }
};
