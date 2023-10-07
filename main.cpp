#include <iostream>
#include <cmath>

using namespace std;

// A class is a specification or blueprint for our new data-type.
// specification, blueprint or template of a data-type.
// a way to model a real world-entity in our program.
class Book {
    public:
        // attributes of a books
        // blueprint of a book data-type.
        string title;
        string author;
        int pages;

};


int main()
{

    // A class is essentially a new data-type
    Book book1;

    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;

    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;
    book2.title = "Hunger games";


    cout << book1.title << endl;
    cout << book1.pages << endl;

    cout << book2.title << endl;
    cout << book2.pages << endl;
    cout << book2.author << endl;


    return 0;
}

