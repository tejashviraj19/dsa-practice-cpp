#include <bits/stdc++.h>
using namespace std;
/*
A school has the following rule for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to user marks and print the corresponding grde. 

int main() {
    int marks;
    cin >> marks;
    if (marks < 25) {
        cout << "F";
    }
    else if (marks <= 44) {
        cout << "E";
    }
    else if (marks <= 49) {
        cout << "D";
    }    
    else if (marks <= 59) {
        cout << "C";
    }
    else if (marks <= 79) {
        cout << "B";
    }    
    else if (marks <= 100) {
        cout << "A";
    }    
    return 0;
}    
*/    
/* Take the age from the user and decide accordingly
1.  If age < 18,
print "not eligible for job"
2. If age => 18, 
print "eligible for job "
3. If age >= 54 and age <= 57,
print "eligible for job, but retirement soon"
4. If age > 57
    print "retirement time"
int main() {
    int age;
    cin >> age;
    if(age <18) {
        cout << "not eligible for job";
    }
    else if(age <54) {
        cout << "eligible for job";
    }
    else if (age <= 57) {
        cout << "eligible for job, but retirement soon";
    }
    else if (age > 57) {
        cout << "retirement time";
    }
}   
*/
int main() {
    int age;
    cin >> age;
    if(age <18) {
        cout << "not eligible for job";
    }
    else if (age <= 57) {
        cout << "eligible for job";
        //nested if condition
        if (age >= 55) {
            cout << ", but retirement soon";
        }
    }
    else {
        cout << "retirement time";
    }
}       
