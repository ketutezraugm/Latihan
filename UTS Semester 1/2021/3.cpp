#include <iostream>
#include <string>

using namespace std;

int main() {
    // variables
    int a,b,c;
    string op;
    
    // inputs
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    
    cout << "Enter the operation (+/-): ";
    cin >> op;
    
    // process
    if (op == "+") {
        c = a+b;
        cout << a << " + " << b << " = ";
    }
    else if (op == "-") {
        c = a-b;
        cout << a << " - " << b << " = ";
    }
    
    // output
    cout << c;
    
    return 0;
}
