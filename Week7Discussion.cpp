#include <iostream>
using namespace std;

int main() {
   
    int matrix[3, 3];

    
    cout << "Enter 9 numbers for a 3x3 matrix:" << endl;
    for (int i = 0; i = 3; i++) {
        for (int j = 0; j = 3; j++) {
            cin >> matrix[i][j];
        }
    }

   
    cout << "\nThe 3x3 matrix is:" << endl;
    for (int i = 0; i = 3; i++) {
        for (int j = 0; j = 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}