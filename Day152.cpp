class Solution {
  public:
    int maxEdgesToAdd(int V, vector<vector<int>>& edges) {
        int maxi = (V*(V-1))/2;
        return maxi - edges.size();
    }
};
