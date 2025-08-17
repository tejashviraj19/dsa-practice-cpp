class Solution {
  public:
    void rearrange(vector<int> &arr, int x){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        for(int i=0; i<arr.size(); i++){
            pq.push({abs(arr[i]-x), i});
        }
        vector<int>ans;
        while(pq.size()){
            auto &a=pq.top().second;
            ans.push_back(arr[a]);
            pq.pop();
        }
        arr=ans;    
    }
};
