#include <iostream>
using namespace std;

void pattern3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int input{};
    cout << "Please Enter n" << endl;
    cin >> input;
    pattern3(input);
}