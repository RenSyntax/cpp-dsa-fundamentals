#include <iostream>
using namespace std;

void pattern7(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2*i+1; j++) {
            cout << "*";
        }
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2*n-2*i+1; j++) {
            cout << "*";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int input{};
    cout << "Please Enter n" << endl;
    cin >> input;
    pattern7(input);
    pattern8(input);
}