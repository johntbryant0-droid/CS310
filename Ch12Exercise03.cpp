#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int numCandidates;
    int totalVotes = 0;

    cout << "Enter the number of candidates: ";
    cin >> numCandidates;

    if (numCandidates <= 0) {
        cout << "Number of candidates must be greater than 0." << endl;
        return 1;
    }

    string* names = new string[numCandidates];
    int* votes = new int[numCandidates];



    for (int i = 0; i < numCandidates; i++) {
        cout << "Enter last name of candidate " << i + 1 << ": ";
        cin >> names[i];

        cout << "Enter votes received by " << names[i] << ": ";
        cin >> votes[i];

        totalVotes += votes[i];
    }


    int maxVotes = votes[0];
    int winnerIndex = 0;

    for (int i = 1; i < numCandidates; i++) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winnerIndex = i;
        }
    }


    cout << "\nElection Results:\n";
    cout << left << setw(15) << "Candidate"
        << setw(10) << "Votes"
        << "Percentage\n";

    for (int i = 0; i < numCandidates; i++) {
        double percentage = (double)votes[i] / totalVotes * 100;

        cout << left << setw(15) << names[i]
            << setw(10) << votes[i]
            << fixed << setprecision(2) << percentage << "%\n";
    }


    cout << "\nWinner of the election: " << names[winnerIndex] << endl;

    delete[] names;
    delete[] votes;

    return 0;
}