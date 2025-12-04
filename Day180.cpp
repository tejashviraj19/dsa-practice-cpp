class Solution {
  public:
    int n;
    vector<vector<pair<int,int>>> dp;
    pair<int,int> fun(int l,int r, vector<int> &keys, vector<int> &freq) {
        if(l>r) return {0,0};
        if(l==r) return {freq[l], freq[l]};
        if(dp[l][r].first!=-1) return dp[l][r];
        int x=0,y=INT_MAX;
        for(int i=l;i<=r;i++) {
            auto a=fun(l,i-1,keys,freq),b=fun(i+1,r,keys,freq);
            int c=a.second+b.second+a.first+b.first+freq[i];
            if(c<y) {
                x=a.first+b.first+freq[i];
                y=c;
            }
        }
        return dp[l][r]={x,y};
    }
    int minCost(vector<int> &keys, vector<int> &freq) {
        n=keys.size();
        dp.assign(n,vector<pair<int,int>>(n,{-1,-1}));
        return fun(0,n-1,keys,freq).second;
        
    }
};
