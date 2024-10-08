#include <iostream>
#include <string>

using namespace std;

int main() {
    // variables
    int c,d;
    
    // given matrix
    int matrix[3][3];
    matrix[0][0] = 4;
    matrix[0][1] = 9;
    matrix[0][2] = 3;
    matrix[1][0] = 5;
    matrix[1][1] = 4;
    matrix[1][2] = 7;
    matrix[2][0] = 7;
    matrix[2][1] = 6;
    matrix[2][2] = 1;
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    // additions
    // first addition
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (i==0 && j==0)
                c = c+matrix[i][j];
            else if (i==1 && j==1)
                c = c+matrix[i][j];
            else if (i==2 && j==2)
                c = c+matrix[i][j];
        }
    }
   cout << "The answer of the addition between the first diagonal is: " << c << endl;
   
   // second addition
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (i==0 && j==2)
                d = d+matrix[i][j];
            else if (i==1 && j==1)
                d = d+matrix[i][j];
            else if (i==2 && j==0)
                d = d+matrix[i][j];
        }
    }
   cout << "The answer of the addition between the secobd diagonal is: " << d << endl;
    
    // seach for 5
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (matrix[i][j]==5)
                cout << "\nThe location of 5 is in: (" << i << ", " << j << ")" << endl;
        }
    }
    
    return 0;
}
