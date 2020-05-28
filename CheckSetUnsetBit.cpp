/**
 * Title     : Check whether bit is set / unset at Nth position
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int pos = 3;

    int x = 6;  // 0110

    bool check = x & (1 << pos); // 0110 & 1000 = 0000

    if (check)
        cout << "Bit at position " << pos << " is set\n";
    else
        cout << "Bit at position " << pos << " is not set\n";

    return 0;
}
