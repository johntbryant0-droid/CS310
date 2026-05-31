
#include <iostream>
#include <random>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {

    
    random_device rd;
    mt19937 gen(rd());

    
    uniform_real_distribution<double> dist(10.0, 100.0);

    vector<double> numbers;

    try {

        cout << "Generating 25 random numbers..." << endl;

        for (int i = 0; i < 25; i++) {

            double num = dist(gen);

            
            if (num >= 50.0 && num <= 55.0) {
                throw runtime_error(
                    "Exception: Number generated in restricted range (50-55)."
                );
            }

            numbers.push_back(num);

            cout << "Number " << i + 1 << ": " << num << endl;
        }

        cout << "\nAll numbers generated successfully." << endl;
    }

    
    catch (runtime_error& e) {
        cout << "\nAn error occurred!" << endl;
        cout << e.what() << endl;
    }

    cout << "\nProgram finished." << endl;

    return 0;
}

