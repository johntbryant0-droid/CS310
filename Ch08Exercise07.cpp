#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;
    string names[SIZE];
    int votes[SIZE];
    int totalVotes = 0;

    
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter last name of candidate " << i + 1 << ": ";
        cin >> names[i];

        cout << "Enter votes received by " << names[i] << ": ";
        cin >> votes[i];

        totalVotes += votes[i];
    }

    
    int maxVotes = votes[0];
    int winnerIndex = 0;

    for (int i = 1; i < SIZE; i++) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winnerIndex = i;
        }
    }

    
    cout << "\nElection Results:\n";
    cout << left << setw(15) << "Candidate"
        << setw(10) << "Votes"
        << "Percentage\n";

    for (int i = 0; i < SIZE; i++) {
        double percentage = (double)votes[i] / totalVotes * 100;

        cout << left << setw(15) << names[i]
            << setw(10) << votes[i]
            << fixed << setprecision(2) << percentage << "%\n";
    }

    
    cout << "\nWinner of the election: " << names[winnerIndex] << endl;

    return 0;
}