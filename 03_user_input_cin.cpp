#include <iostream>
using namespace std;

int main() {
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

    cout << "Enter the number of cookies: ";
    cin >> cookies;

    int cookies_left = cookies % friends;
    cout << "Total cookies left over: " << cookies_left << endl;

    return 0;
}