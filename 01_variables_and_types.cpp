#include <iostream>
#include <string>
using namespace std;

int main() {
    int x; // Variable declaration
    x = 5; // Value assignment
    int y;
    y = 6;

    cout << x << '\n';
    cout << y << '\n';
    
    // The '\n' character is used to move the output cursor to the next line.
    cout << x; 
    cout << y << '\n';
    
    // Since there is no newline character between x and y above, they print together as "56" instead of separate lines.

    int sum = x + y;
    cout << sum << '\n';

    int number_1 = 7.5;
    cout << number_1 << '\n';
    // This prints as 7 because 'int' only stores integers and truncates the decimal part.

    // double
    double number_2 = 99.99;
    cout << number_2 << '\n';
    // 'double' is used to store and display numbers with decimal values.

    // single character
    char grade = 'A';
    char currency = '$';
    cout << grade << '\n';
    cout << currency << '\n';

    // boolean (true or false)
    bool student = false;
    bool power = true;

    // string (Objects that represent a sequence of text)
    string name = "Anish";
    string food = "burger";
    string day = "Monday";
    cout << name << '\n';

    cout << "Hello " << name << '\n';
    cout << "Your grade is " << grade << '\n';

    // constants
    const double PI = 3.14159;
    const int DAYS_IN_WEEK = 7;

    return 0;
}