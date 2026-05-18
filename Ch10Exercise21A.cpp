#include <iostream>
using namespace std;

class bankAccount {

protected:
	int accountNumber;
	double balance;

public: 
	bankAccount();
	bankAccount(int accNum, double bal);

	void setAccountNumber(int accNum);
	int getAccountNumber() const;
	double getBalance() const;

	void deposit(double amount);
	virtual void withdraw(double amount); 

	virtual void print() const;
};
bankAccount::bankAccount() {
	accountNumber = 0;
	balance = 0.0;
}

bankAccount::bankAccount(int accNum, double bal) {
	accountNumber = accNum;
	balance = bal;
}

void bankAccount::setAccountNumber(int accNum) {
	accountNumber = accNum;
}

int bankAccount::getAccountNumber() const {
	return accountNumber;
}

double bankAccount::getBalance() const {
	return balance;
}

void bankAccount::deposit(double amount) {
	balance += amount;
}

void bankAccount::withdraw(double amount) {
	if (amount > balance) {
		cout << "Insufficient funds." << endl;
	}
	else {
		balance -= amount;
	}
}
void bankAccount::print() const {
	cout << "Account Number: " << accountNumber << endl;
	cout << "Balance: $" << balance << endl;
};

class checkingAccount : public bankAccount {
	

private:
	double interestRate;
	double minimumBalance;
	double serviceCharge;

public:
	checkingAccount();
	checkingAccount(int accNum, double bal, double rate, double minBal, double charges);

	void setInterestRate(double rate);
	double getInterestRate() const;

	void setMinimumBalance(double minBal);
	double getMinimumBalance() const;

	void setServiceCharge(double charges);
	double getServiceCharge() const;

	void postInterest();
	bool belowMinimumBalance() const;
	void writeCheck(double amount);

	void withdraw(double amount) override;
	void print() const override;
};

checkingAccount::checkingAccount()
	: bankAccount(), interestRate(0), minimumBalance(0), serviceCharge(0){
}

checkingAccount::checkingAccount(int accNum, double bal, double rate, double minBal, double charges)
	: bankAccount(accNum, bal) {
	interestRate = rate;
	minimumBalance = minBal;
	serviceCharge = charges;

}
void checkingAccount::setInterestRate(double rate) {
	interestRate = rate;
}

double checkingAccount::getInterestRate() const {
	return interestRate;
}

void checkingAccount::setMinimumBalance(double minBal) {
	minimumBalance = minBal;
}

double checkingAccount::getMinimumBalance() const {
	return minimumBalance;
}

void checkingAccount::setServiceCharge(double charges) {
	serviceCharge = charges;
}

double checkingAccount::getServiceCharge() const {
	return serviceCharge;
}

void checkingAccount::postInterest() {
	double interest = balance * interestRate;
	balance += interest;
}

bool checkingAccount::belowMinimumBalance() const {
	return balance < minimumBalance;
}

void checkingAccount::writeCheck(double amount) {
	withdraw(amount);
}

void checkingAccount::withdraw(double amount) {
	if (amount > balance) {
		cout << "Insufficient funds." << endl;
	}
	else {
		balance -= amount;
		if (belowMinimumBalance()) {
			balance -= serviceCharge;
			cout << "Service charge applied due to low balance." << endl;
		}
	}
}

void checkingAccount::print() const {
	bankAccount::print();
	cout << "Interest Rate: " << interestRate << "%" << endl;
	cout << "Minimum Balance: $" << minimumBalance << endl;
	cout << "Service Charge: $" << serviceCharge << endl;
};


class savingsAccount : public bankAccount {
	
private:
	double interestRate;

public:
	savingsAccount();
	savingsAccount(int accNum, double bal, double rate);

	void setInterestRate(double rate);
	double getInterestRate() const;

	void postInterest();

	void withdraw(double amount) override;
	void print() const override;
};

savingsAccount::savingsAccount()
	: bankAccount(), interestRate(0) {
}

savingsAccount::savingsAccount(int accNum, double bal, double rate)
	: bankAccount(accNum, bal) {
	interestRate = rate;
}

void savingsAccount::setInterestRate(double rate) {
	interestRate = rate;
}

double savingsAccount::getInterestRate() const {
	return interestRate;
}

void savingsAccount::postInterest() {
	balance += balance * interestRate;

}

void savingsAccount::withdraw(double amount) {
	if (amount <= balance)
		balance -= amount;
	else
		cout << "Insufficient funds." << endl;
}

void savingsAccount::print() const {
	bankAccount::print();
	cout << "Interest Rate: " << interestRate << "%" << endl;
};

int main() {
	checkingAccount chk(1001, 500, 0.05, 300, 25);
	savingsAccount sav(2001, 1000, 0.04);

	cout << "Checking Account:" << endl;
	chk.withdraw(250);
	chk.postInterest();
	chk.print();

	cout << "\nSavings Account:" << endl;
	sav.deposit(200);
	sav.postInterest();
	sav.withdraw(500);
	sav.print();

	return 0;	

}