#include <iostream>
using namespace std;

int main() {
    // addition and subtraction:
    int apples = 10;
    int bananas = 5;

    // addition
    int total_fruit = apples + bananas;
    cout << "Total fruit: " << total_fruit << '\n';
    // prints 15

    // subtraction
    int difference = apples - bananas;
    cout << "Difference: " << difference << '\n';
    // prints 5

    // multiplication
    int items = 4;
    double price = 19.99;

    int total_cost = items * price;
    cout << "Total cost : $" << total_cost << '\n';

    double total_cost_2 = items * price;
    cout << "Total cost: $" << total_cost_2 << '\n';
    // double is more accurate than int

    // division
    int points = 10;
    int people = 4;

    int normal_division = points / people; // answer must be 2.5
    cout << "Result: " << normal_division << '\n'; // here the result is not 2.5 but 2

    // to fix this we use double
    double points1 = 10.0;
    int people1 = 4;

    double accurate_division = points1 / people1;
    cout << "Result: " << accurate_division << '\n';

    // Modulo operator (%)
    // gives only remainders
    int leftover = 10 % 3;
    cout << leftover << '\n';

    return 0;
}