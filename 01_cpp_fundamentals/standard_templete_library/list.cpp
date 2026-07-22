#include <bits/stdc++.h>
using namespace std;

void list() {
    // List are similar to vector but better for time complexity.

    list<int> ls; // Makes a empty list.

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2. 4}
    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(2); // {2, 5, 2, 4}

    // Rest of the functions are similar to vector.. check 'vector.cpp' for syntax.
}