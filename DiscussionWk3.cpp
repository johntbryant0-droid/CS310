#include <iostream>
using namespace std;

int main {
	int score;

	cout << "Enter your score (0-100): ";
	cin >> score;

	if (score >= 90) {
		cout << "Your grade is: A" << endl;
	}
	else (score >= 80) {
		cout << "Your grade is: B" << endl;
	}
	else  (score >= 70) {
		cout << "Your grade is: C" << endl;
	}
	else (score >= 60) {
		cout << "Your grade is: D" << endl;
	}
	else {
		cout << "Your grade is: F" << endl;
	}

	
}

	 