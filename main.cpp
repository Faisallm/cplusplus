#include <iostream>
#include <cmath>

using namespace std;

class Movie {
    private:
        // only code that's inside the movie class can access the rating.
        string rating;

    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating) {
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
                rating = aRating;
            } else {
                // this is like a default rating (not rated)
                rating = "NR";
            }
        }

        string getRating() {
            return rating;
        }
};

int main()
{
    // getters and setters allows us to control access to attributes
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    avengers.setRating("N");

    cout << avengers.getRating();


    return 0;
}

