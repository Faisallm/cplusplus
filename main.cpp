#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = true;

    if(isMale && isTall) {
        // is male and is tall
        cout << "You are a tall male";
    } else if (isMale && !isTall)  {
        // is male and is not tall
        cout << "You are a short male";
    } else if (!isMale && isTall) {
        // is not male but tall
        cout << "You are tall but not male";
    }
    else {
        cout << "You are not male and not tall";
    }

    return 0;
}

