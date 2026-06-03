#include <bits/stdc++.h>
using namespace std;

// Problem 1: Printing a 4x4 pattern:
void pattern(int n) {
  // step 1: to focus on outer loops which are for rows
  for (int i = 0; i < n; i++) {

    // step 2: focus on inner loop for columns.
    for (int j = 0; j < n; j++) {
      cout << "*";
    }
    cout << endl; // the change the line.
  }
}

void pattern2(int m) {

  // number of rows will be the first:
  for (int i = 0; i < m; i++) {

    // You somehow has to connect the columns to the rows.:
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern3(int b) {

  // count the number of lines:
  for (int i = 0; i < b; i++) {
    // for the inner loop, connect the rows to the colums;
    for (int j = 0; j <= i; j++) {

      cout <<
    }
  }
}

int main() {
  int input{};
  cout << "Please Enter the Number of Symetry: ";
  cin >> input;
  pattern2(input);
  return 0;
}
