//By intorducing function
void print1() {
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 3; j++)  {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    print1();
}
*/
void print1( int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)  {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    print1(n);
}
