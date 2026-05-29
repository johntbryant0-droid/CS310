#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
class Box 
private:
    T value;

public:
    Box(T v = 0) {
        value = v;
    }

    T divideBy( divisor) {
        if (divisor == 0) {
            throw runtime_error("Error: Cannot divide by zero.");
        }
        return value / divisor;
    }

    Box operator+(const Box other) {
        Box temp;
        temp.value = value + other.value;
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    try {
        Box<int> box1(20);
        Box<int> box2(10);

        Box<int> box3 = box1 + box2;

        cout << "After adding two Box objects:" << endl;
        box3.display();

        cout << "Dividing box1 by 5: ";
        cout << box1.divideBy(5) << endl;

        cout << "Trying to divide box1 by 0..." << endl;
        cout << box1.divideBy(0) << endl;
    }
    catch (runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}