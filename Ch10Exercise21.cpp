#include <iostream>
#include <string>
using namespace std;

class bankAccount {
private:
	string name;
	int accountNumber;
	string accountType;
	double balance;
	double interestRate;

	static int nextAccountNumber;

public:
	bankAccount() {
		accountNumber = nextAccountNumber++;
		balance = 0;
		interestRate = 0; 
	}

	void setAccount(string n, string type, double bal, double rate) {
		name = n;
		accountType = type;
		balance = bal;
		interestRate = rate;

	}

	void deposit(double amount) {
		balance += amount;
	}

	void withdraw(double amount) {
		if (amount <= balance)
			balance -= amount;
		else
			cout << "Insufficient funds\n";
	}

	void applyInterest() {
		balance += balance * interestRate;
	}

	void display() const {
		cout << "Name: " << name << endl;
		cout << "Account #: " << accountNumber << endl;
		cout << "Type: " << accountType << endl;
		cout << "Balance: " << balance << endl;
		cout << "Interest Rate: " << interestRate << endl;
		cout << "___________________________\n";
	}
};

int bankAccount::nextAccountNumber = 1000;

int main() {
	bankAccount accounts[10];

	int n;
	cout << "Enter number of customers (max 10): ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		string name, type;
		double balance, rate;

		cout << "\nCustomer " << i + 1 << endl;
		cout << "Enter name: ";
		cin.ignore(); // Ignore the newline character left in the input buffer
		getline(cin, name);
		cout << "Enter account type (checking/saving): ";
		getline(cin, type);
		cout << "Enter balance: ";
		cin >> balance;
		cout << "Enter interest rate (decimal): ";
		cin >> rate;
		accounts[i].setAccount(name, type, balance, rate);

	}

	accounts[0].deposit(100);
	accounts[0].applyInterest();

	cout << "\n--- Account Details ---\n";
	for (int i = 0; i < n; i++) {
		accounts[i].display();
	}

	return 0;

}
