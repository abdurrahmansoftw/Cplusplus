#include <iostream>

using namespace std;


int main() {
    int rowSize;
    int colSize;

    cout << "Enter the number of rows: ";
    cin >> rowSize;

    cout << "Enter the number of columns: ";
    cin >> colSize;

    int matrix[rowSize][colSize];

    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            cout << "Enter the value for row " << i + 1 << " and column " << j + 1 << ": ";
            cin >> matrix[i][j];
        }
    }

    cout << "The matrix is: " << endl;

    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
