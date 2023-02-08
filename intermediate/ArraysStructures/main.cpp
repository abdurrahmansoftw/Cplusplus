#include <iostream>

#include <vector>

using namespace std;

struct Date {
    short year;
    short month;
    short day;
};


struct Movie {
    string title;
    Date releaseDate;
    bool isPopular;
};


int main() {
    vector<Movie> movies;

    movies.push_back({"The Shawshank Redemption", {1994, 10, 14}, true});
    movies.push_back({"The Godfather", {1972, 3, 24}, true});

    for (const auto& movie: movies) {
        cout << movie.title << " was released on " << movie.releaseDate.month << "/" << movie.releaseDate.day << "/"
             << movie.releaseDate.year << endl;
    }

    return 0;
}
