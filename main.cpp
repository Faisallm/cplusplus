#include <iostream>

using namespace std;

int main()
{
    // printing out to console and variables


    // declaration and assignment of variable
    string characterName = "Faisal";
    // declaration of variable
    int characterAge;
    // assignment of variable
    characterAge = 20;

    string gender = "man";

    string pronoun = "He";

    cout << "There once was a " << gender << " named " << characterName << endl;
    cout << pronoun << " was " << characterAge << " years old" << endl;

    // halfway though the story we can change the character name
    characterName = "Abdul"
    cout << pronoun << " liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge <<  endl;

    return 0;
}
