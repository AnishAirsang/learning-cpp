#include <iostream>

int main(){

    int x; // Variable declaration
    x = 5; // Value assignment
    int y;
    y = 6;

    std::cout << x << '\n';
    std::cout << y << '\n';
    
    
    // The '\n' character is used to move the output cursor to the next line.

    std::cout << x; 
    std::cout << y << '\n';
    
    // Since there is no newline character between x and y above, they print together as "56" instead of separate lines.
    // Note: 'return 0;' (optional here) explicitly signals that the program ended successfully.

    int sum = x + y;
    std::cout << sum << '\n';

    int number_1 = 7.5;
    std::cout << number_1 << '\n';
    // This prints as 7 because 'int' only stores integers and truncates the decimal part.

    // double

    double number_2 = 99.99;
    std::cout << number_2 << '\n';
    // 'double' is used to store and display numbers with decimal values.

    // single character

    char grade = 'A';
    char currency = '$';
    std::cout << grade << '\n';
    std::cout << currency << '\n';

    // boolean (true or false)
    bool student = false;
    bool power = true;

    // string (Objects that represent a sequence of text)
    std::string name = "Anish";
    std::string food = "burger";
    std::string day = "Monday";
    std::cout << name << '\n';

    std::cout << "Hello " << name << '\n';
    std::cout << "Your grade is " << grade << '\n';
   



























}