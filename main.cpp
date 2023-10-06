#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // working with numbers

    // to deal with decimal numbers, we have floats and double
    // double carries more precision compared to floats

    int wnum = 5;
    double dnum = 5.5;

    wnum++;
    dnum--;

    wnum += 30;
    dnum -= 45;

    // printout 6
    cout << wnum << endl;
    cout << dnum << endl;

    // how do int and doubles work together

    // we are going to get a decimal number back
    cout << typeid(5.5 + 9).name() << endl;
    cout << 10 / 3.0 << endl;

    cout << pow(2, 5) << endl;
    cout << sqrt(36) << endl;
    // round down
    cout << round(4.3) << endl;
    // round up
    cout << ceil(4.3) << endl;
    // round down
    cout << floor(4.8) << endl;
    cout << fmax(34.5, 34.5) << endl;


    return 0;
}
