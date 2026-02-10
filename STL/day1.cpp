#include<bits/stdc++.h>
using namespace std;

int main() {
    // Declare an unordered_set of integers
    unordered_set s;

    // Insert elements from 1 to 10 into the unordered_set
    for (int i = 1; i <= 10; i++) {
        s.insert(i); // insert() adds a new element to the set
    }

    // Display all elements present in the unordered_set
    cout << "Elements present in the unordered set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " "; // Dereference iterator to access the element
    }
    cout << endl;

    int n = 2;
    // Check if element 2 exists in the set using find()
    if (s.find(2) != s.end()) // find() returns an iterator to element if found, else s.end()
        cout << n << " is present in unordered set" << endl;

    // Erase the first element from the set using iterator
    s.erase(s.begin()); // erase() removes element at given iterator position

    // Display elements after deletion
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Display size of the unordered set
    cout << "The size of the unordered set is: " << s.size() << endl;

    // Check if the unordered set is empty
    if (s.empty() == false) // empty() returns true if set has no elements
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;

    // Clear all elements from the unordered set
    s.clear(); // clear() removes all elements

    // Display size after clearing
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
}

