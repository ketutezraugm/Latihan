#include <iostream>
#include <string>

using namespace std;

int main() {
    // given x
    for (int x=0; x<=80; x++) {
        if (0<x && x<=5)
            cout << x << " is a toddler";
        else if (5<x && x<=17)
            cout << x << " is a child";
        else if (17<x && x<=27)
            cout << x << " is a teen";
        else if (27<x && x<=55)
            cout << x << " is a adult";
        else if (55<x && x<=80)
            cout << x << " is a senior";
        cout << endl;
    }
    
    return 0;
}
