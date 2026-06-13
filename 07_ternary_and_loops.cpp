#include <iostream>
#include <string>
using namespace std;

int main() {
    // Ternary Operator Shortcuts
    int number1 = 10;
    string result;
    if (number1 % 2 == 0) {
        result = "Even";
    } else {
        result = "odd";
    }

    // or we can write this as:
    int number = 10;
    string result1 = (number % 2 == 0) ? "Even" : "Odd";
    cout << "Result: " << result1 << '\n';

    // loops
    int counter = 1;
    while (counter <= 3) {
        cout << "hello. loop count: " << counter << "\n";
        counter++;
    }

    return 0;
}