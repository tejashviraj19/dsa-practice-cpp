//code01
#include <iostream>
using namespace std;

int main() {
    // Output message
    cout << "Hello, World!" << endl;
    
    // Asking for user input
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Displaying the entered number
    cout << "You entered: " << number << endl;
    
    // Simple conditional check
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}

//code 2
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << "value of x:" << x;
    return 0;    
}
