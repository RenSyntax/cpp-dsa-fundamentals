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
  // working fine.
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

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

// backend:
int main() {
  int input{};
  cin >> input;
  pattern2(input);
  return 0;
}