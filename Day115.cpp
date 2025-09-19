class Solution {
  public:
    int minParentheses(string& s) {
        // code here
        int count = 0, ct =0;
        for(auto i: s){
            if(i=='(')ct++;
            else ct--;
            if(ct == -1){
                ct =0;
                count++;
            }
        }
        count+=ct;
        return count;
    }
};
