//extra things missed in prv. lectures
//type conversion and type casting

#include <iostream>
using namespace std;

int main(){
    //type casting -> explicit
    double price = 100.99;
    int newprice = (int)price;
    cout << newprice << endl;
    //this is the format for 'explixit' type conversion that is to convert from big data type to small data type

    //implicit -> small to big (type conversion)
    char grade = 'A';
    int value = grade;
    cout << grade << endl; //this will print A
    cout << value << endl; //This will print 65 as 'A' in ascii is 65
    




}