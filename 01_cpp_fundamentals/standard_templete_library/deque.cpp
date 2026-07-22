#include <bits/stdc++.h>
using namespace std;

void deque() {
    // Deque is similar to list and vector.

    deque<int> dq; // Makes a empty deque,
    dq.push_back(2); // {2}
    dq.push_front(3); // {3, 2}
    dq.emplace_back(4); // {3, 2, 4}
    dq.emplace_front(5);  // {5, 3, 2, 4}

    // All the rest of the syntax are similar to vector.

}