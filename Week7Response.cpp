#include <iostream>
using namespace std;

int main() {

    int numbers[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Loop through the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Done printing array" << endl;
    cout << numbers[0][0];

    return 0;
}