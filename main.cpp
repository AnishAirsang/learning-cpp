//to sync in github do ts:
//first git add .
//second git commit -m "what all changes you did, add it here"
// third git push
#include <iostream>
using namespace std;

int main(){

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
    // Note: 'return 0;' (optional here) explicitly signals that the program ended successfully.

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

    //constants
    const double PI = 3.14159;
    const int DAYS_IN_WEEK = 7;

    //addition and substraction:

    int apples = 10;
    int bananas = 5;

    //addition
    int total_fruit = apples + bananas;
    cout << "Total fruit: " << total_fruit << '\n';
    //prints 15

    //substraction
    int difference = apples - bananas;
    cout << "Difference: " << difference << '\n';
    //prints 5

    //multiplication
    int items = 4;
    double price = 19.99;

    int total_cost = items * price;
    cout << "Total cost : $" << total_cost << '\n';


    double total_cost_2 = items * price;
    cout << "Total cost: $" << total_cost_2 << '\n';

    //double is more accurate than int

    //division
    int points = 10;
    int people = 4;

    int normal_division = points/people; //answer must be 2.5
    cout <<"Result: "<<normal_division << '\n'; //here the result is not 2.5 but 2

    //to fix this we use double

    double points1 = 10.0;
    int people1 = 4;

    double accurate_division = points1/people1;
    cout << "Result: " << accurate_division << '\n';

    //Modulo operator (%)
    //gives only remainders

    int leftover = 10%3;
    cout << leftover << '\n';

    // IMPORTANT TOPIC - CIN
    int user_number; 
    cout << "Enter your favourite number: ";
    cin >> user_number;
    cout << "Your favourite number is: " << user_number << '\n';
    

    // Tiny Tiny Project: Take two numbers from the user, multiply them, and print the result.
    int user_number_1;
    int user_number_2;
    cout << "Enter 1st number: ";
    cin >> user_number_1;
    cout << "Enter 2nd number: ";
    cin >> user_number_2;
    int answer = user_number_1 * user_number_2;
    cout << answer << '\n';

    // Tiny Tiny Project: Take a total number of cookies, divide them among 3 friends, and print how many cookies are left over.
    int cookies;
    int friends = 3;
    int cookies_left = cookies % friends;
    cout << "Enter the number of cookies: ";
    cin >> cookies;
    cout << "Total cookies left over: " << cookies_left;



}