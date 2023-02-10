#include <iostream>
#include <sstream>

using namespace std;

// Given the following string , write a function to parse this into Movie Structured.
// Terminator 2, 1991, 8.5

struct Movie {
    string title;
    int year{};
    float rating{};
};

Movie parseMovie(const string &str) {
    Movie movie;
    stringstream ss(str);
    string token;
    getline(ss, token, ',');
    movie.title = token;
    getline(ss, token, ',');
    movie.year = stoi(token);
    getline(ss, token, ',');
    movie.rating = stof(token);
    return movie;
}

int main() {
    string str = "Terminator 2, 1991, 8.5";
    Movie movie = parseMovie(str);
    cout << movie.title << " " << movie.year << " " << movie.rating << endl;
    return 0;
}

