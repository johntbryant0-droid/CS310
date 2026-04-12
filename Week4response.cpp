#include <iostream>
#include <string>

using namespace std;

int main() {
    int i;
    string name;

    // The Loop
    for (i = 1; i <= 1; i++) {
        cout << "Welcome to the program!" << endl;
        cout << "What's your name?" << endl;
        cin >> name;

        if (name.empty()) {
            cout << "Error: No name entered." << endl;
        }
        else {
            cout << "Hello, " << name << "!" << endl;
        }
    }
}