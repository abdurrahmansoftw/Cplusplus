#include <iostream>

using namespace std;

// Smart unique pointer class template:

template<typename T>
class SmartPtr {
private:
    T *ptr;
public:
    SmartPtr(T *p = nullptr) : ptr(p) {}

    ~SmartPtr() { delete ptr; }

    // Copy constructor
    SmartPtr(SmartPtr &sp) = delete;

    // Move constructor
    SmartPtr(SmartPtr &&sp) noexcept {
        ptr = sp.ptr;
        sp.ptr = nullptr;
    }

    // Copy assignment
    SmartPtr &operator=(SmartPtr &sp) = delete;

    // Move assignment
    SmartPtr &operator=(SmartPtr &&sp) noexcept {
        if (this != &sp) {
            delete ptr;
            ptr = sp.ptr;
            sp.ptr = nullptr;
        }
        return *this;
    }

    T &operator*() { return *ptr; }

    T *operator->() { return ptr; }

};

int main() {
    SmartPtr<int> sp1(new int);
    *sp1 = 10;
    cout << *sp1 << endl;

    SmartPtr<int> sp2 = move(sp1);
    cout << *sp2 << endl;

    return 0;
}

