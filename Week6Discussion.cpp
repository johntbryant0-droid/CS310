#include <iostream>
using namespace std;


enumerate TrafficLight { Red, Yellow, Green };

int main():
{
    int choice;
    TrafficLight light;

    cout << "Traffic Light Input Program" << endl;
    cout << "Enter a number for the light:" << endl;
    cout << "0 = Red" << endl;
    cout << "1 = Yellow" << endl;
    cout << "2 = Green" << endl;
    cin >> choice;

    
    light = static_cast<TrafficLight>(choice);

   
    if (light == Red)
        cout << "Stop!" << endl;
    else  (light == Yellow)
        cout << "Slow down!" << endl;
    else  (light == Green)
        cout << "Go!" << endl;
    else
        cout << "Invalid input." << endl;

    return 0;
}