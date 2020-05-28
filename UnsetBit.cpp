/**
 * Title     : Unset bit at nth position
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int pos = 2;

    int x = 6;  // 0110

    /*
        (1 << 2) - 0100
        ~(1 << 2) - 1011
        6 & (~(1 << 2)) - 0110 & 1011 = 0010
    */

    x = x & (~(1 << pos)); // 0010

    cout << x << '\n';

    return 0;
}
