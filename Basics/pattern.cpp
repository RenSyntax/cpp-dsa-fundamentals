#include <bits/stdc++.h>
using namespace std;

// Problem 1: Printing a 4x4 pattern:
int main() {
  // step 1: to focus on outer loops which are for rows
  for (int i = 0; i < 4; i++) {

    // step 2: focus on inner loop for columns.
    for (int j = 0; j < 4; j++) {
      cout << "*";
    }
    cout << endl; // the change the line.
  }

  return 0;
}