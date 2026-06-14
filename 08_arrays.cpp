#include <iostream>
using namespace std;

int main() {
    int marks[3] = {85, 90, 78};

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;

    marks[1] = 95;
    cout << marks[1];

    cout << "The highest marks is: " << marks[1] << "\n";
    cout << "The lowest marks is: " << marks [2] << "\n";

    // Tiny Tiny Project: Store 4 favorite numbers in an array and print the 3rd one.
    int favourite_numbers[4] = {1, 7, 25, 8};
    cout << favourite_numbers[2] << endl;

    // Tiny Tiny Project: Change the 2nd number in your array to 100, then print it to prove it changed.
    favourite_numbers[1] = 100;
    cout << favourite_numbers[1] << "\n";
}