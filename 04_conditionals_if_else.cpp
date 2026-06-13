#include <iostream>
using namespace std;

int main() {
    // general format:
    // if (condition) {
    //     code to run if the condition is true
    // }

    int score = 85;
    if (score >= 50) {
        cout << "you passed \n";
    }

    // Tiny Tiny Project: Driving Age Checker
    int driver_age;
    cout << "Enter your age: \n";
    cin >> driver_age;

    if (driver_age >= 18) {
        cout << "You are eligible to drive\n";
    } else {
        cout << "You are not eligible to drive\n";
    }

    // Tiny Tiny Project: Check if a student passed or failed a test (passing is 50+)
    int marks;
    cout << "Enter your marks: \n";
    cin >> marks;

    if (marks >= 50) {
        cout << "You passed\n";
    } else {
        cout << "you failed\n";
    }

    // else if type questions
    int temp;
    cout << "Enter temperature: \n";
    cin >> temp;

    if (temp > 90) {
        cout << "very hot \n";
    } else if (temp > 60) {
        cout << "normal temp \n";
    } else {
        cout << "very cold \n";
    }

    return 0;
}