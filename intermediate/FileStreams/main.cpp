#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main() {
    ofstream myfile;
    myfile.open("example.txt");

    if (myfile.is_open()) {
        // csv file = comma separated values
        myfile << "id, title, author\n"
               << "1, The C++ Programming Language, Bjarne Stroustrup\n"
               << "2, C++ Primer, Stanley B. Lippman\n"
               << "3, Effective C++, Scott Meyers\n";

        myfile.close();

    } else cout << "Unable to open file";

    return 0;
}
