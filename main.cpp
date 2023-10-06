#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // arrays (like python lists)
    // we are essentially telling c++, we want to store 20 elements...
    // in this luckyNums array

    //int luckyNums[20] = {4, 8, 15, 16, 23, 42};
    int luckyNums[20];

    // modifying the first element of an array
    luckyNums[0] = 7;

    // adding a value
    luckyNums[10] = 100;


    cout << "last element: " << luckyNums[5] << endl;
    cout << "first element: " << luckyNums[0] << endl;
    cout << "10th value: " << luckyNums[10] << endl;
    cout << "Let's see the 11th value: " << luckyNums[11] << endl;


    return 0;
}
