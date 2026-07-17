#include <bits/stdc++.h>
using namespace std;

void pair() {

    // Pair
    pair <int, int> p = {1, 3}; // This stores two numbers.

    cout << p.first << endl; // Prints first value of pair, here it's '1'.
    cout << p.second << endl; // Prints second value of pair, here it's '3'.


    // Nested Pair
    pair <int, pair <int, int>> p2 = {1, {3, 4}};

    cout << p2.second.second << endl; // Prints the second value of second pair, here it's '4'.
    cout << p2.second.first << endl; // Prints the first value of second pair, here it's '3'.


    // Array in Pair
    pair <int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};

    cout << arr[1].second << endl; // Prints second value of pair with array index of 1, here it's '3'.
}