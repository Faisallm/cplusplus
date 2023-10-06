#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int age = 19;
    // gives us the pointer where a variable is stored.
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Faisal";
    // storing a pointer for the name
    // the memory address of name variable
    string *pName = &name;

    // a pointer is a type of information we can work with in our program.
    //cout << &age << endl;
    //cout << &gpa << endl;
    //cout << &name << endl;
    cout << pName << endl;
    cout << *pAge  << endl;

    cout << *&*&gpa;

    // derefferencing a pointer.



    return 0;
}

