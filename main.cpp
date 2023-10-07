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
        // a constructor is a special object that will be called...
        // whenever we create a book object

        //default values
        // we can define multiple constructors
        // we are giving the user multiple ways of...
        // creating an object.
        Book () {
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

};


int main()
{

    // A class is essentially a new data-type
    // objects are instances of a class
    // using constructor functions makes class declarations easier.
    Book book1("Harry Potter", "JK Rowling", 500);

    Book book2("Lord of the Rings", "Tolkein", 700);

    Book book3;

    cout << book1.title << endl;
    cout << book1.pages << endl;

    cout << book2.title << endl;
    cout << book2.pages << endl;
    cout << book2.author << endl;

    cout << book3.title;
    cout << book3.author;
    cout << book3.pages;


    return 0;
}

