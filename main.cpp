#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // for loops
    // no cap but c++ is alot like Javascript.

    //int index = 1;
    //while(index <= 5) {
      //  cout << index << endl;
        //index++;
    //}
    // array of integers
    int nums[] = {1, 2, 5, 7, 3};
    int lengthArr = sizeof(nums) / sizeof(nums[0]);


    // iterating through the contents of an array
    // technically, that's how we roll

    for(int i=0; i < lengthArr; i++) {
        cout << nums[i] << endl;
    }

    cout << "The length of the array above is: " << lengthArr << endl;


    return 0;
}

