#include <iostream>
#include <cmath>

using namespace std;

double cube(double num) {
    // using the math function.
    // return signifies the end of the function
    return pow(num, 3);
}

int main()
{
    cout << cube(2.0);

    return 0;
}

