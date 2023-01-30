#include <iostream>

using namespace std;

// intermediate Arrays

//// 1. String Arrays unpacking example 1
//int main() {
//    string str1[] = {"Hello", "World"};
//    auto [str2, str3] = str1;
//    cout << str2 << " " << str3 << endl;
//    return 0;
//}


// 2. create a function for finding a value in an integer array. if the value is found, return the index of the value. if not, return -1
int find(const int arr[], int size, int value) {
    for (int i = 0; i < size; i++)
        if (arr[i] == value) {
            return i;
        }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter a value: ";
        cin >> arr[i];
    }

    int value;
    cout << "Enter value to find: ";
    cin >> value;

    int index = find(arr, size, value);

    (index == -1 ? cout << "Value not found" : cout << "Value found at index " << index) << endl;

    return 0;
}

