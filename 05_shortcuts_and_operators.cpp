#include <iostream>
using namespace std;

int main() {
    // Increment and decrement operators
    int score2 = 10;
    score2++; // now score is 11

    int score1 = 10;
    score1--; // now score is 9

    // Tiny Tiny Project: Modify a game score using ++ and --
    int points2 = 100;
    cout << "Your points are: " << points2 << '\n';
    points2++;
    points2--;
    points2--;
    cout << "Final points: " << points2 << '\n';

    // Combined Assignment Operators
    int gold = 100;
    gold = gold + 50; // adds 50 to gold

    int silver = 100;
    silver += 50; // adds 50 to silver

    return 0;
}