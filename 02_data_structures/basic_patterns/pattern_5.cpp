#include <iostream>
using namespace std;

void pattern5(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int input{};
    cout << "Please Enter n" << endl;
    cin >> input;
    pattern5(input);
}