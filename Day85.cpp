class Solution {
  public:
     bool ispos(vector<int>&citations, int mid ){
          
           
            int count =0;
            
            for(int i:citations){
                 
                     if (i>=mid) count++;
                     
                     if (count>=mid) return true;
                    
            }
            
            return count>=mid;
           
     }
  
  
    int hIndex(vector<int>& citations) {
           
            int i=0;
            int j=citations.size();
            int ans =0;
            while (i<=j){
                 
                 
                    int mid = i+ (j-i)/2;
                    
                    
                    if (ispos(citations , mid )){ 
                            
                             ans = mid;
                             i=mid+1;
                    }
                    else{
                         j= mid-1;
                    }
                   
            }
            
            return ans;
           
        
    }
};
