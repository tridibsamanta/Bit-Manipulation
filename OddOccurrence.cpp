/**
 * Title     : Find the element occurring odd number of times
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int nums[] = {42, 22, 36, 36, 42, 22, 42};

    int nums_size = sizeof(nums) / sizeof(nums[0]);

    int oddOcc = 0;

    for (int i = 0; i < nums_size; ++i) {
        oddOcc ^= nums[i];  // a ^ a = 0
    }

    cout << "Element occurring odd number of times is : " << oddOcc << '\n';

    return 0;
}
