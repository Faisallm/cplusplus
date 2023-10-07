#include <iostream>
#include <cmath>

using namespace std;

// superclass
class Chef {
    public:

        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }

        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }

        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

// Italian chef inheriting from chef
// it will have all the functions of the Chef class.
// plus it's own additional functions.

//subclass
class ItalianChef: public Chef {
    // extending the chef class
    // make pasta
    public:
        void makePasta() {
            cout << "The chef makes pasta" << endl;
        }

        void makeSpecialDish() {
            cout << "The italian chef makes bbq ribs" << endl;
        }
};


int main()
{

    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();
    italianChef.makePasta();

    return 0;
}

