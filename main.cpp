#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //char age;
    //double ager;

    //cout << "Enter your name: ";
    //cin >> age;

    //cout << "You are " << age << " years old" << endl;
    //cout << "You are " << ager << " years old" << endl;

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name;


    return 0;
}
