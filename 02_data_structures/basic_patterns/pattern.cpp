#include <bits/stdc++.h>
using namespace std;


// LECTURE EXAMPLES:

// Pattern 1: 
void pattern1(int n) {
  /*
  Example:
  ****
  ****
  ****
  ****
  */

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "*";
    }
    cout << endl;
  }

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

  for (int i = 1; i <= n; i++) {        // If you do 'int i = 1' instead of '0', make
        for (int j = 1; j <= i; j++) {  // sure to use '<=' rather than just '<'
      cout << "*";
    }
    cout << endl;
  }
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
      cout << j;
    }
    cout << endl;
  }
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
      cout << i;
    }
    cout << endl;
  }
}

// Pattern 5:
void pattern5(int n) {

  /* Example:
  *****
  ****
  ***
  **
  *
  */

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n-i+1; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

// Pattern 6:
void pattern6(int n) {
  /*
  Example:
  12345
  1234
  123
  12
  1
  */

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n-i+1; j++) {
      cout << j;
    }
    cout << endl;
  }
}

// Pattern 7:
void pattern7(int n) {
  /*
  Example:
        *
       ***
      *****
     *******
    *********    
  */

  for (int i = 0; i < n; i++) {

    for (int j = 0; j < n-i-1; j++) { // for space on left side.
      cout << " ";
    }
    for (int j = 0; j < 2*i+1; j++) { // for stars in center.
      cout << "*";
    }
    for (int j = 0; j < n-i-1; j++) { // for space on right side.
      cout << " ";
    }

    cout << endl;
    
  }
}

// Patter 8:
void pattern8(int n) {

  /*
  Example:
  *********
   *******
    *****
     ***
      *
  */

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2*n-(2*i+1); j++) { // 2i+1, was used it previous equation,
      cout << "*";                          // if you think about it, its just 2n-the previous values.
    }
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    cout << endl;
  }
}

// ---

// Daily Practice:

/* void pattern1(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; i++) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern2(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern3(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    cout << endl;
  }
}

void pattern4(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i;
    }
    cout << endl;
  }
}

void pattern5(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n-i+1; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern6(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n-i+1; j++) {
      cout << j;
    }
    cout << endl;
  }
}

void pattern7(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n-i-1; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2*i+1; j++) {
      cout << "*";
    }
    for (int j = 0; j < n-i-1; j++) {
      cout << " ";
    }
    cout << endl;
  }
}


void pattern8(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2*n-(2*i+1); j++) {
      cout << "*";
    }
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    cout << endl;
  }
}
  */

  
// backend:
int main() {
  int input{};
  cin >> input;
  pattern8(input);
  return 0;
}