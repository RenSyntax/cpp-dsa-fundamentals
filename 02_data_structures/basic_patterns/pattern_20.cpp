#include <iostream>
#include <cmath>
using namespace std;

void pattern20(int n) {
    
      for (int i = 1; i <= 2*n-1; i++) {
        int stars = i;

        for (int j = 1; j <= stars; j++) {
            if (i > n) {
                stars = 2*n-i;
            }
            cout << "*";
        }
        for (int j = 1; j < abs(2*n-2*i); j++) {
            cout <<  " ";
        }
        for (int j = 1; j <= stars; j++) {
            if (i > n) {
                stars = 2*n-i;
            }
            cout << "*";
        }
        cout << endl;
      }
}

int main() {
    int input{};
    cout << "Please Enter n" << endl;
    cin >> input;
    pattern20(input);
}