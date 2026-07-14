#include <iostream>
using namespace std;

void pattern17(int n) {
    
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        int breakPoint = (2*i+1) / 2;
        
        for (int j = 1; j <= n-i-1; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2*i+1; j++) {
            cout << ch << " ";
            if (j <= breakPoint) {
                ch++;
            } else {
                ch--;
            }

        }

        for (int j = 1; j <= n-i-1; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

int main() {
    int input{};
    cout << "Please Enter n" << endl;
    cin >> input;
    pattern17(input);
}