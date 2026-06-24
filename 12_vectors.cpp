#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);

    cout << nums[0]<< endl;
    cout << nums [1]<< endl;

    //push_back() adds an element at the end

    cout << nums.size() << endl;
    //loop through vectors
    for(int i =0; i< nums.size(); i++){
        cout << nums[i] << endl;

    //explaination:
    // for (Initialization; condition; update)
//| Part              | Meaning                               |
 //----------------- | ------------------------------------- |
 //`int i = 0`       | Start from index 0                    |
 //`i < nums.size()` | Keep going while true                 |
 //`i++`             | Increase i by 1 after every iteration |

 //range-based for loop:
 for(int x : nums) {
    cout << x << endl;
}

    }

}