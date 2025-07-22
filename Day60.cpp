class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n);

    int product = 1;
    int zeroCount = 0;
    for (int num : arr) {
      if (num == 0) {
        zeroCount++;
      } else {
        product *= num;
      }
    }

    if (zeroCount > 1) {
      for (int i = 0; i < n; ++i) {
        res[i] = 0;
      }
    } else if (zeroCount == 1) {
      for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
          res[i] = product;
        } else {
          res[i] = 0;
        }
      }
    } else {
      for (int i = 0; i < n; ++i) {
        res[i] = product / arr[i];
      }
    }
    return res;
  }
};
