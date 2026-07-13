#include <iostream>
using namespace std;

void pattern15(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch < 'A' + n-i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }  
}

int main() {
    int input{};
    cout << "Please Enter n" << endl;
    cin >> input;
    pattern15(input);
}