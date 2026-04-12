#include <iostream>
using namespace std;

int calculateDishes(int a, int b, int t)
{
	int totalTime = 0;
	int dishes = 0;
	int currentTime = a;

	while (totalTime + currentTime <= t)
	{
		totalTime += currentTime;
		dishes++;

		currentTime += b;
	}

	return dishes;
}

int main(){

	int a, b, t;

	cout << "Enter time for first dish (a): ";
	cin >> a;

	cout << "Enter time of each additional dish (b): ";
	cin >> b;

	cout << "Enter total time available (t): ";
	cin >> t;

	int result = calculateDishes(a, b, t);

	cout << "Number of dishes that can be prepared: " << result << endl;

	return 0;
}