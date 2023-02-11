#include <iostream>

using namespace std;

// Smart Pointer to object Class example:

class SmartPtr {
    int *ptr; // Actual pointer
public:
    // Constructor: Refer https://www.geeksforgeeks.org/g-fact-93/ for details
    explicit SmartPtr(int *p = NULL) { ptr = p; }

    // Destructor
    ~SmartPtr() { delete (ptr); }

    // Overloading dereferncing operator
    int &operator*() { return *ptr; }
};

int main() {
    SmartPtr ptr(new int());
    *ptr = 20;
    cout << *ptr;
    return 0;
}