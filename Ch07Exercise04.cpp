#include <iostream>
#include <string>

using namespace std;


bool isVowel(char ch)
{
    ch = tolower(ch);  

    return (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u');
}


string removeVowels(string str)
{
    for (int i = 0; i < str.length(); )
    {
        if (isVowel(str[i]))
        {
         
            str = str.substr(0, i) + str.substr(i + 1);
        }
        else
        {
            i++;  
        }
    }

    return str;
}

int main()
{
    string str;

    cout << "Enter a word: ";
    getline(cin, str);

    str = removeVowels(str);

    cout << "Word after removing vowels: " << str << endl;

    return 0;
}