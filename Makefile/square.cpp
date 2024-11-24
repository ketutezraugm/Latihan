#include <iostream>
using namespace std;

int square(int a, int b) {
    return (a*b);
}

int main() {
    int a,b;
    
    cout << "Enter the lenght: ";
    cin >> a;
    
    cout << "Enter the breadth: ";
    cin >> b;
    
    cout << square(a,b);
    
    return 0;
}
