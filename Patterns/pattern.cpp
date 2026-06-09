#include <bits/stdc++.h>
using namespace std;

// Pattern 1:
void pattern1(int n) {

  /*
  Example
  *****
  *****
  *****
  */
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "*";
    }
    cout << endl;
  }
  // Done.
}

// Pattern 2:
void pattern2(int n) {

  /*
  Example:
  *
  **
  ***
  ****
  */

  for (int i = 1; i <= n; i++) { // If you do 'int i = 1' instead of '0', make
                                 // sure to use '<=' rather than just '<'
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  // Done.
}

// Pattern 3:
void pattern3(int n) {

  /*
  1
  12
  123
  1234
  12345
  */

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j; // Try to Visualize the logic with a example input.
    }
    cout << endl;
  }
  // Done.
}

// backend:
int main() {
  int input{};
  cin >> input;
  pattern3(input);
  return 0;
}