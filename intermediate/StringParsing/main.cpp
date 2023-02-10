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
    string token; // string to hold each token
    getline(ss, token, ','); // getline extracts string until delimiter
    movie.title = token; // getline extracts string until delimiter
    getline(ss, token, ','); // getline extracts string until delimiter
    movie.year = stoi(token); // stoi converts string to int
    getline(ss, token, ','); // getline extracts string until delimiter
    movie.rating = stof(token); // stof converts string to float
    return movie; // return the movie struct
}

int main() {
    string str = "Terminator 2, 1991, 8.5"; // string to parse
    Movie movie = parseMovie(str); // call parseMovie function
    cout << movie.title << " " << movie.year << " " << movie.rating << endl;
    return 0;
}

