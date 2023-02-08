#include <iostream>

using namespace std;
// define a structure for representing customers -id, name, address, phone, email ask user for those values and store them in a customer object and print the result.
struct Customer {
    int id;
    string name;
    string address;
    string phone;
    string email;
};

int main() {
    Customer customer;
    cout << "Enter customer id: ";
    cin >> customer.id;

    cout << "Enter customer name: ";
    cin >> customer.name;

    cout << "Enter customer address: ";
    cin >> customer.address;

    cout << "Enter customer phone: ";
    cin >> customer.phone;

    cout << "Enter customer email: ";
    cin >> customer.email;

    cout << "Customer id: " << customer.id << endl;
    cout << "Customer name: " << customer.name << endl;
    cout << "Customer address: " << customer.address << endl;
    cout << "Customer phone: " << customer.phone << endl;
    cout << "Customer email: " << customer.email << endl;
    return 0;
}
