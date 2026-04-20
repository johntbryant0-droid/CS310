#include <iostream>
#include <iomanip>
using namespace std;


double calculateBill(double hourlyRate, int minutes, bool lowIncome)
{
    double bill = 0.0;
    int freeMinutes;

    if (lowIncome)
    {
        freeMinutes = 30;

        if (minutes > freeMinutes)
        {
            bill = hourlyRate * 0.40 * ((minutes - freeMinutes) / 60.0);
        }
    }
    else
    {
        freeMinutes = 20;

        if (minutes > freeMinutes)
        {
            bill = hourlyRate * 0.70 * ((minutes - freeMinutes) / 60.0);
        }
    }

    return bill;
}

int main()
{
    double hourlyRate;
    int consultingTime;
    char incomeStatus;
    bool lowIncome;


    cout << "Enter hourly rate: $";
    cin >> hourlyRate;

    cout << "Enter total consulting time in minutes: ";
    cin >> consultingTime;

    cout << "Does the person have low income? (Y/N): ";
    cin >> incomeStatus;


    if (incomeStatus == 'Y' || incomeStatus == 'y')
        lowIncome = true;
    else
        lowIncome = false;


    double amountDue = calculateBill(hourlyRate, consultingTime, lowIncome);


    cout << fixed << setprecision(2);
    cout << "Billing Amount: $" << amountDue << endl;

    return 0;
}