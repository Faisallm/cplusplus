#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    string phraseSub;
    // in python, you can't modify strings
    // in c++ you can modify strings
    cout << phrase;
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    // I want to change the value of the string
    phrase[0] = 'B';
    cout << phrase << endl;
    cout << phrase.find("Academy", 0) << endl;
    cout << phrase.find("ffe", 0) << endl;
    // string splitting in c++
    phraseSub = phrase.substr(8, 3);
    cout << phraseSub;

    return 0;
}
