#include <iostream>
using namespace std;

void pattern16(int n) {
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << ch << " ";
            
        }
        ch = 'A' +  i;
        cout << endl;
    } 
}

int main() {
    int input{};
    cout << "Please Enter n" << endl;
    cin >> input;
    pattern16(input);
}