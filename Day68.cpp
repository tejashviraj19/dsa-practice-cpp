#include <vector>
#include <string>
#include <stack>
#include <stdexcept>

class Solution {
public:
    int evaluate(std::vector<std::string>& arr) {
        std::stack<long long> s; // Use long long for intermediate calculations to prevent overflow before final cast

        for (const std::string& token : arr) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                if (s.size() < 2) {
                    throw std::runtime_error("Invalid RPN expression: not enough operands");
                }
                long long operand2 = s.top();
                s.pop();
                long long operand1 = s.top();
                s.pop();

                long long result;
                if (token == "+") {
                    result = operand1 + operand2;
                } else if (token == "-") {
                    result = operand1 - operand2;
                } else if (token == "*") {
                    result = operand1 * operand2;
                } else { // token == "/"
                    if (operand2 == 0) {
                        throw std::runtime_error("Division by zero");
                    }
                    result = operand1 / operand2;
                }
                s.push(result);
            } else {
                s.push(std::stoll(token)); // Convert string to long long
            }
        }

        if (s.size() != 1) {
            throw std::runtime_error("Invalid RPN expression: too many operands");
        }

        return static_cast<int>(s.top());
    }
};
