#include<bits/stdc++.h>
using namespace std;

Take the day no and print the corresponding day
for 1 print monday
for 2  print tuesday and so on for 7 print Sunday.

int main() {
    int day;
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;                  
    }
    cout << "check";
    return 0;
}
//1D Array
int main() {
    float arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[3];
    return 0;
}
//2D Array
int main() {
    int arr[3] [5];

    arr [1] [3] = 69;
    cout << arr[1] [3];
    return 0;
}
//String
int main() {
    string s = "Striver";
    cout << s[2];
    return 0;
}
int main() {
    string s = "Strivez";
    int len = s.size();
    cout << s[len - 1];
    return 0;
}
int main() {
    string s = "Strivez";
    int len = s.size();
    s[len-1] = 'r';  // not "r", it will give errors
    cout << s[len - 1];
    return 0;
}    

//for loops
int main() {
    int i =0;
    for(i =0;i<9; i+=2){
        cout<<i<<endl;
    }
    cout<<"This is updated i "<<i+3<<endl;
}

// for loops
int main() {
    for (int i = 1; i <= 5; i = i+1) {
        cout << "striver " ;
    }
    return 0;
}
 
int main() {
    for (int i = 1; i <= 5; i = i+1) {
        cout << "striver " << endl;
    }
    return 0;
} 

// outside for loop
int main() {
    int i;
    for (i = 1; i <= 5; i = i+1) {
        cout << "striver " << endl;
    }
    cout << i << endl;
    return 0;
}    

int main() {
    int i;
    for (i = 2; i <= 5; i = i+1) {
        cout << "striver " << endl;
    }
    cout << i+2 << endl;
    return 0;
} 

//while loop
int main() {
    int i = 1;
    while (i <= 5) { //check
        cout << "striver " << i << endl; //print
        i = i + 1; //increase
    }
    return 0;
} 

//do while loop..used to execute code at least one time
int main() {
    int i = 2;
    do {   
        cout << "striver " << i << endl;
        i = i + 1; //increase
    } while (i<=1);
    cout << i << endl;

    return 0;
} 


// Functions

void printName() {
    cout << "Hey Tejashvi" ;
}
int main() {
    printName();
}

void printName(string name) {
    cout << "Hey " << name;
}
int main() {
    string name;
    cin >> name;
    printName(name);
    return 0;
}

void printName(string name) {
    cout << "Hey " << name << endl;
}
int main() {
    string name;
    cin >> name;
    printName(name);

    string name2;
    cin >> name2;
    printName(name2);
    return 0;
}

//sum of 2 numbers
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int num3 = num1 + num2;
    cout << num3;
    return 0;
}

//Take two numbers and print its sum
int sum(int num1, int num2) {
    int num3 = num1 + num2;
    return num3;
}
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2);
    return 0;
}


int maxx(int num1, int num2) {
    if(num1 >= num2) return num1;
}
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int minimum = maxx(num1, num2);
    cout << minimum;
    return 0;
}

//pass by value
void doSomething(int num) { //copy of the number
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main() {
    int num = 10; //orignal number
    doSomething(num);
    cout << num << endl;
    return 0;
}

//also works in string
void doSomething(string s) {
    s[0] = 't';
    cout << s << endl;
}
int main() {
    string s = "raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}

//pass by reference
void doSomething(string &s) { // & this brings the original value to the end
    s[0] = 't';
    cout << s << endl;
}
int main() {
    string s = "raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}

//pass by reference
void doSomething(int &sum) {
}
int main() {
    int arr[5];
    for (int i = 0; i <=4; i = i+1) {
        cin >> arr [i];
    }

    for (int i = 0; i<=4; i = i+1) {
        cout << arr[i] << " ";
    }
    return 0;
}
*/
// pass by reference
void doSomething (int arr[], int n) {
    arr[0] += 100;
    cout << "value inside function:" << arr[0] << endl;
}

int main() {
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i = i+1) {
        cin >> arr [i];
    }

    doSomething (arr, n);
    cout << "value inside int main :" << arr[0] << endl;
    return 0;
}
