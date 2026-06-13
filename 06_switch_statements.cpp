#include <iostream>
using namespace std;

int main() {
    int level = 2;
    switch (level) {
        case 1:
            cout << "welcome to level 1! \n";
            break;
        case 2:
            cout << "welcome to level 2! \n";
            break;
        default:
            cout << "Unknown level! \n";
            break;
    }

    return 0;
}