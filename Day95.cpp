class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        int ans=0;
        int i=0, j=0;
        int n=arr.size();
        
        int c0=0;
        
        while(j<n){
            if(arr[j]==0)
              c0++;
            while(c0>k){
                if(arr[i]==0)
                  c0--;
                i++;  
            }
            
            ans=max(ans, j-i+1);
            j++;
        }
        
        
        return ans;
    }
};
