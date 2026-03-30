#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main() {
	double netBalance, payment, interestRate;
	int d1, d2;

	cout << "Enter the net balance: $";
	cin >> netBalance;

	cout << "Enter the payment: $";
	cin >> payment;

	cout << "Enter number of days in billing cycle: ";
	cin >> d1;

	cout << "Enter number of days payment is made before the end of billing cycle: ";
	cin >> d2;

	cout << "Enter the interest rate: ";
	cin >> interestRate;

	double averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

	double intreset = averageDailyBalance * interestRate;

	cout << fixed << setprecision(2);
	locale loc("");
	cout.imbue(loc);

	cout << "Interest on unpaid balance: $" << intreset << endl;

	return 0;

}

	