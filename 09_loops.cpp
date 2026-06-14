#include <iostream>
using namespace std;

int main (){

for (int i = 1; i <= 3; i++) {
    cout << i << "\n";
}
// Tiny Tiny Project: Write a for loop that counts from 1 to 5 and prints each number on a new line.
for (int i = 1; i <= 5; i++) {
    cout << i << "\n";
}
for (int i = 1; i <= 4; i++) {
    cout << "Anish\n"; 
}
// Tiny Tiny Project: Write a for loop that prints "C++ is fun!" exactly 3 times.
for (int i = 1; i<= 3; i++){
    cout << "C++ is fun \n";
}
//good problem
int score [3] = {95, 42, 91};
for (int i = 0; i <3; i++){
    if (score[i] > 90){
        cout << score[i] << " is a high score \n";
    }
// Tiny Tiny Project: Create an array of 5 exam grades. Use a loop and an if statement to only print out the grades that are a passing mark (70 or higher).
int score1[5] = {99, 100, 74, 86, 51};
for (int i = 0; i <= 4; i++){
    if (score1[i] >= 70 ){
        cout << score1[i] << "You passed \n";
    }
}
}







}
