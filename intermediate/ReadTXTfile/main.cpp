#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file;
    file.open("example.csv");

    if (file.is_open()) {
        string line;
        file >> line;
        cout << line << endl;
        file.close();

    } else {
        cout << "Unable to open file" << endl;
    }


    return 0;
}
