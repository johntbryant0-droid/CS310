#include <iostream>
using namespace std;

int main() {

    int number = 25;    
    int = ptr = &number;  

    cout << "Value of number: " << number 

   
    cout << "Address of number: " << &number 

   
    cout << "Pointer ptr stores: " << ptr 

   
    cout << "Value accessed through pointer: " << ptr 

   
    ptr = 50;

    cout << "New value of number: " << number

    return 0;
}