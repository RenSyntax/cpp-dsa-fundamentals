#include <iostream>
using namespace std;

void pattern21(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

}

int main() {
    int input{};
    cout << "Please Enter n" << endl;
    cin >> input;
    pattern21(input);
}