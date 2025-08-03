class Solution {
public:
  vector<vector<int>> applyDiff2D(vector<vector<int>>& mat,
                                  vector<vector<int>>& opr) {
    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>> diff(n + 1, vector<int>(m + 1, 0));

    for (const auto& op : opr) {
      int v = op[0];
      int r1 = op[1];
      int c1 = op[2];
      int r2 = op[3];
      int c2 = op[4];

      diff[r1][c1] += v;
      if (c2 + 1 < m) {
        diff[r1][c2 + 1] -= v;
      }
      if (r2 + 1 < n) {
        diff[r2 + 1][c1] -= v;
      }
      if (r2 + 1 < n && c2 + 1 < m) {
        diff[r2 + 1][c2 + 1] += v;
      }
    }

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (i > 0) {
          diff[i][j] += diff[i - 1][j];
        }
        if (j > 0) {
          diff[i][j] += diff[i][j - 1];
        }
        if (i > 0 && j > 0) {
          diff[i][j] -= diff[i - 1][j - 1];
        }
        mat[i][j] += diff[i][j];
      }
    }

    return mat;
  }
};
