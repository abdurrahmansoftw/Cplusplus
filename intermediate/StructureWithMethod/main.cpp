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

    bool equals(const Movie &movie) {
        return (title == movie.title && releaseDate.year == movie.releaseDate.year &&
                releaseDate.month == movie.releaseDate.month && releaseDate.day == movie.releaseDate.day &&
                isPopular == movie.isPopular);
    }
};

int main() {

    Movie movie1 = {"The Matrix", {1999, 3, 31}, true};
    Movie movie2 = {"The Matrix", {1999, 3, 31}, true};

    if (movie1.equals(movie2)) {
        cout << "The movies are the same" << endl;
    } else {
        cout << "The movies are different" << endl;
    }

    return 0;
}
