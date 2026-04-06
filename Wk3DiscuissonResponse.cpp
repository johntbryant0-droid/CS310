#include <iostream>
#include <string>

using namespace std; 


int main()
{
    bool exitFlag = false;;
    int runCount = 0;
    string userInput;

    do
    {
        cout << "Welcome to the program. I'll count how many times you press the enter key!" << endl;
        cout << "Press ENTER to continue or type EXIT to quit:" << endl;

        getline(cin, userInput);

        if (userInput == "EXIT") {
            exitFlag = true;
            cout << "Aww :( goodbye friend!" << endl;
        }
        else
        {
            runCount++;
            cout << "Enter pressed " << runCount << " times!" << endl;
        }
    } while (!exitFlag);
    return 0;
}   

    