#include <iostream>
#include "TextBox.h"

using namespace std;

int main() {

    TextBox Box;

    Box.disable();

    cout << Box.isEnabled() << endl;

    cout << "inheritance and polymorphism!" << endl;
    return 0;
}
