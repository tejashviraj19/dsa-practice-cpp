class Solution {
    public:
    int countLessEqual(vector<int>& arr, int x) {
        // code here
        sort(arr.begin(),arr.end());
        int ans=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        return ans;
    }
};
