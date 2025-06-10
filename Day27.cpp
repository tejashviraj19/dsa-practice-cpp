#include <iostream>
using namespace std;

void Print5(int n) {
    for (int i = 1; i<= n; i++) {
        for( int j = 0; j<= n-i+1; j++) {
            cout << "*" ;
        }
        cout<< endl;
    }
}

int main() {
    int t;
    cin>> t;
    for(int i = 0; i<t; i++) {
        int n;
        cin >> n;
        Print5(n);
    }
}

void Print6(int n) {
    for (int i = 1; i<= n; i++) {
        for( int j = 1; j<= n-i+1; j++) {
            cout << j << " " ;
        }
        cout<< endl;
    }
}

int main() {
    int t;
    cin>> t;
    for(int i = 0; i<t; i++) {
        int n;
        cin >> n;
        Print6(n);
    }
}

void Print7(int n) {
    for (int i = 0; i<= n; i++) {
        //space
        for( int j = 0; j<= n-i-1; j++) {
            cout <<  " " ;
        }

        //star
        for( int j = 0; j< 2*i+1; j++) {
            cout <<  "*" ;
        }    

        //space
        for( int j = 0; j<= n-i-1; j++) {
            cout <<  " " ;
        }
        cout<< endl;
    }
}
int main() {
    int t;
    cin>> t;
    for(int i = 0; i<t; i++) {
        int n;
        cin >> n;
        Print7(n);
    }
}    
//reverse pattern

void Print8(int n) {
    for (int i = 0; i<= n; i++) {
        //space
        for( int j = 0; j< i; j++) {
            cout <<  " " ;
        }

        //star
        for( int j = 0; j< 2*n -(2*i+1); j++) {
            cout <<  "*" ;
        }    

        //space
        for( int j = 0; j< i; j++) {
            cout <<  " " ;
        }
        cout<< endl;
    }
}

    
int main() {
    int t;
    cin>> t;
    for(int i = 0; i<t; i++) {
        int n;
        cin >> n;
        Print8(n);
    }
}
*/

//both at a time

void Print7(int n) {
    for (int i = 0; i<= n; i++) {
        //space
        for( int j = 0; j<= n-i-1; j++) {
            cout <<  " " ;
        }

        //star
        for( int j = 0; j< 2*i+1; j++) {
            cout <<  "*" ;
        }    

        //space
        for( int j = 0; j<= n-i-1; j++) {
            cout <<  " " ;
        }
        cout<< endl;
    }
}

void Print8(int n) {
    for (int i = 0; i<= n; i++) {
        //space
        for( int j = 0; j< i; j++) {
            cout <<  " " ;
        }

        //star
        for( int j = 0; j< 2*n -(2*i + 1); j++) {
            cout <<  "*" ;
        }    

        //space
        for( int j = 0; j< i; j++) {
            cout <<  " " ;
        }
        cout<< endl;
    }
}

    
int main() {
    int t;
    cin>> t;
    for(int i = 0; i<t; i++) {
        int n;
        cin >> n;
        Print7(n);
        Print8(n);
    }
}
