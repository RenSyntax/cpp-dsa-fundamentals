#include <iostream>
using namespace std;

void pattern19A(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2*i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern19B(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2*n-2*i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int input{};
    cout << "Please Enter n" << endl;
    cin >> input;
    pattern19A(input);
    pattern19B(input);
}