#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 36, num2 = 60;

    cout << "GCD of " << num1 << " and " << num2 << " is " << findGCD(num1, num2) << endl;

    return 0;
}
