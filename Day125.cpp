#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> uniquePerms(vector<int> arr) {
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end()); // sort to handle duplicates and ensure lexicographic order
        vector<int> current;
        vector<bool> used(n, false);
        
        backtrack(arr, used, current, ans);
        return ans;
    }
    
private:
    void backtrack(vector<int>& arr, vector<bool>& used, vector<int>& current, vector<vector<int>>& ans) {
        if (current.size() == arr.size()) {
            ans.push_back(current);
            return;
        }
        
        for (int i = 0; i < arr.size(); i++) {
            if (used[i]) continue;
            
            // Skip duplicates
            if (i > 0 && arr[i] == arr[i-1] && !used[i-1]) continue;
            
            used[i] = true;
            current.push_back(arr[i]);
            backtrack(arr, used, current, ans);
            current.pop_back();
            used[i] = false;
        }
    }
};
