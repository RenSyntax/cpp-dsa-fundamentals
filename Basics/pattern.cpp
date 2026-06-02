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

int main() {
  int input{};
  cout << "Please Enter the Number of Symetry: ";
  cin >> input;
  pattern(input);
  return 0;
}
