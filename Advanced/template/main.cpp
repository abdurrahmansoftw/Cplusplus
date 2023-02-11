#include <iostream>

using namespace std;

int larger(int first, int second) {
    return first > second ? first : second;
}

double larger(double first, double second) {
    return first > second ? first : second;
}

int main() {

    larger(1, 2);

    return 0;
}
