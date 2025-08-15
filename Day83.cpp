#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findLargest(vector<int> &arr) {
        // Convert all integers to strings
        vector<string> nums;
        for (int num : arr) {
            nums.push_back(to_string(num));
        }
        
        // Custom sort: if xy > yx, x should come before y
        sort(nums.begin(), nums.end(), [](string &a, string &b){
            return a + b > b + a;
        });
        
        // Edge case: if the largest number is 0, return "0"
        if (nums[0] == "0") return "0";
        
        // Concatenate all numbers
        string result = "";
        for (string &s : nums) result += s;
        
        return result;
    }
};
