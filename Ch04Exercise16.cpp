#include <iostream>

using namespace std;


int main() {
	const double OPTION1_Payment = 5000 + 20000;
	const double OPTION2_Rate = 0.125;
	const double OPTION3_Rate1 = 0.1;
	const double OPTION3_Rate2 = 0.14;
	const int THRESHOLD = 4000;

	double netPrice;
	int copiesSold;

	cout << "Enter the net price of each book: ";
	cin >> netPrice;

	cout << "Enter the number of copies sold: ";
	cin >> copiesSold;

	double option1 = OPTION1_Payment;
	double option2 = copiesSold * netPrice * OPTION2_Rate;
	double option3;
	if (copiesSold <= THRESHOLD) {
		option3 = copiesSold * netPrice * OPTION3_Rate1;
	}
	else {
		option3 = THRESHOLD * netPrice * OPTION3_Rate1 + ((copiesSold - THRESHOLD) * netPrice * OPTION3_Rate2);
	}
	cout << "\nRoyalties under each option:\n";
	cout << "Option 1: $" << option1 << endl;
	cout << "Option 2: $" << option2 << endl;
	cout << "Option 3: $" << option3 << endl;

	double best = option1;
	int bestOption = 1;

	if (option2 > best) {
		best = option2;
		bestOption = 2;
	}

	if (option3 > best) {
		best = option3;
		bestOption = 3;
	}

	cout << "\nBest option: Option " << bestOption
		<< " with royalties of $" << best << endl;

	return 0;
}
	