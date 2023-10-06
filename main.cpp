#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int index = 6;

    //while(index <= 5) {
        // print out index
      //  cout << index << endl;
        // increment index by 1
        //index++;
    //}


    // a do-while loop will run the code at least once...
    // before checking the condition.

    do {
        cout << index << endl;
        index++;
    } while(index <= 5);

    return 0;
}

