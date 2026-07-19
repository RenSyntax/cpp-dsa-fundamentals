#include <bits/stdc++.h>
using namespace std;

void vector() {
    
    // Vector is used when indexes is dynamic.

    vector <int> v; // Defines a empty countainer.

    v.push_back{1}; // Adds '1' to the empty countainer.
    v.emplace_back{3} // Adds '3' to the countainer just after '1'.
    // The final Countainer looks like ---> {1, 3}

// ---

    // Pair inside a vector
    vector <pair <int, int>> v2;
    v2.push_back{{1. 2}}; // Adds pair of '1' and '2' to countainer.
    v2.emplace_back{1, 2} // Does the same thing, but with diffirent syntax.

    vector <int> v3{5, 100}; // Countainer containing '100' five times already defined.
    vector <int> v4{5}; // Container containing garbage value five times already defined.
    vector <int> v5{v3}; // Copy of vector v3;

// ---

    // ---> How to access elements in a vector ? take example vector, v = {1, 3, 5, 7}

    // First way: Similar to Arrays
    cout << v[0]; // Prints '1'
    cout << v[1]; // Prints '2'
    // and so on....

    // Second way: Using iterater
    vector<int>::iterater it = v.begin(); // Memory Location of first element.
    cout << *(it); // Prints the first element. --> '1'
    it++; // Memory location moved to next one, AKA Memory location of second element.
    cout << *(it); // Prints the second element. ---> '3'
    // and so on.....
    v.end(); // Memory location of one element after the last element.
    v.back(); // Memory location of last element.

// ---

    // ---> How to print a vector ?

    for (vector<int>::iterater it = v.begin(); it != v.end(); it++) { // Prints whole vector.
        cout << *(it) << " "; // You can change 'v.end()' to something else, if you want to print part of vector.
    }

    // Shorter way:
    for (auto it = v.begin(); it != v.end(); it++) { // 'auto' automatically assigins the data type according to the data.
        cout << *(it) << " ";
    }

    // More Shorter way:
    for (auto it : v) { // Here 'it' is int data type.
        cout << it << " ";
    }

// ---

    // Erase in vector: Deleting in vector. ---> Take Example vector, it = {20, 30 , 40. 32}
    v.erase(v.begin() + 1, v.begin() + 3); // Result ---> {20, 40}
    // Important Point: Remember that to erase, you first enter the starting memory location and then one after the element, till which you want to erase, its memory location.

    // To Erase single element:
    v.erase(v.begin() + 2); // This will erase '40' from example vector.

// ---    

    // Insert Function
    vector<int>v{2, 100}; // {100, 100}

    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    // ---> How to insert one vector to another.
    vector<int>copy{2, 50}; // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

// ---

    // More about Vector, Example vector = {10, 20}
    cout << v.size(); // Tells the size of vector, here it's '2'.
    v.pop_back(); // Removes the last element of vector, here result: {10}.

    // v1 = {10, 20}
    // v2 = {30, 40}
    v1.swap(v2); // v1 --> {30, 40}, v2 --> {10, 20}.

    v.clear(); // Erase the entire vector.
    
    cout << v.empty(); // ---> If has elements then 'False'. If no elements then 'True'.
    

}