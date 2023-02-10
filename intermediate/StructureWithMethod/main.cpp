#include <iostream>

using namespace std;

// constructor use Method 1

struct Date {
    int year;
    int month;
    int day;
};

struct Movie {
    string title;

    Date releaseDate;
    bool isPopular;

    bool operator==(const Movie &movie) const {
        return (title == movie.title && releaseDate.year == movie.releaseDate.year &&
                releaseDate.month == movie.releaseDate.month && releaseDate.day == movie.releaseDate.day &&
                isPopular == movie.isPopular);
    }
};

int main() {

    Movie movie1 = {"The Matrix", {1999, 3, 31}, true};
    Movie movie2 = {"The Matrix", {1998, 3, 31}, true};

    cout << (movie1 == movie2 ? "The movies are the same" : "The movies are different") << endl;

    return 0;
}
