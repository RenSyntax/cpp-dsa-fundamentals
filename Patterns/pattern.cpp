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

  /* Example:
  1
  12
  123
  1234
  12345
  */

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout
          << j; // Try to Visualize the logic with a example input.
                // When you use 'j' you are calling the nested loop, whose value
                // differ, and is not constant, example: 1 --> 2 --> 3......
    }
    cout << endl;
  }
  // Done.
}

// Pattern 4:
void pattern4(int n) {

  /* Example:
  1
  22
  333
  4444
  55555
  */

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i; // outside 'for' loop determines the rows, when you use it
                 // inside a nested loop, it acts as a constant, example '1',
                 // '2' or '3'....
    }
    cout << endl;
  }
}

// Pattern 5:
void pattern5(int n) {

  /* Example:

  */

  for (int i =)
}

// backend:
int main() {
  int input{};
  cin >> input;
  pattern4(input);
  return 0;
}