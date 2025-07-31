#include <string>
#include <stack>
#include <map>

class Solution {
public:
    bool isBalanced(std::string& k) {
        std::stack<char> s;
        std::map<char, char> bracket_map;
        bracket_map['('] = ')';
        bracket_map['['] = ']';
        bracket_map['{'] = '}';

        for (char c : k) {
            if (c == '(' || c == '[' || c == '{') {
                s.push(c);
            } else if (c == ')' || c == ']' || c == '}') {
                if (s.empty()) {
                    return false; // Closing bracket without a matching open bracket
                }
                char open_bracket = s.top();
                s.pop();
                if (bracket_map[open_bracket] != c) {
                    return false; // Mismatched brackets
                }
            }
        }

        return s.empty(); // True if all brackets are matched, false otherwise
    }
};
