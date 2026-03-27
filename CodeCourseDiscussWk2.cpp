#include <ios>
using namespace std;

int main() {
	string name;
	int age;

	cout << "What is your name? ";
	cin >> name;

	cout << "How old are you? ";
	cin >> age;

	cout << "Hello, " << name << "! You are " << age << " years old." << endl;

	return 0;
