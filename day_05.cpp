class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        
        //Sort the array in non-decreasing order
        sort(arr.begin(), arr.end());
        
        //Start from second last element as last is the largest
        for (int i = n-2; i>=0; i--) {
            if (arr[i] != arr[n-1]) {
                return arr[i];
            }
        }
        
        //If no second largest element was found
        return -1;
    }
};
