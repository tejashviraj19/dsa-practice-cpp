class Solution {
    bool elementsWithGivenDiff(vector<int>& arr, int d, int k){
        int cnt = 1, j = 0, n = arr.size();
        for(int i=1; i<n; i++){
            if((arr[i] - arr[j]) >= d){
                cnt++;
                j = i;
            }
        }
        return cnt >= k;
    }
  public:
    int maxMinDiff(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int n = arr.size(), l = 1, h = (arr[n-1] - arr[0]), res = 0;
        while(l<=h){
            int m = l + ((h-l+1)/2);
            if(elementsWithGivenDiff(arr, m, k)){
                res = m;
                l = m+1;
            }
            else{
                h = m-1;
            }
        }
        return res;
    }
};
