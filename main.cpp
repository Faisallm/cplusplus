#include <iostream>
#include <cmath>

using namespace std;

// declare the function, give it a signature.
// function signature / function stub
void sayHi(string name, int age);

int main()
{
    // functions

    cout << "Top" << endl;
    // running the function
    sayHi("Faisal", 20);
    sayHi("Amina", 15);
    cout << "Bottom";

    return 0;
}


// void means that the function will not return anything.
void sayHi(string name, int age) {
    cout << "Hello "<< name << " you are " << age << " years old." << endl;
}
