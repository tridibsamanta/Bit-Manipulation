/**
 * Title     : Toggling a bit at nth position
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int pos = 2;

    int x = 6;  // 0110

    cout << x << '\n';

    /*
        (1 << 2) - 0100
        6 ^ (1 << 2) - 0110 ^ 0100 = 0010
    */

    x = x ^ (1 << pos); // 0010

    cout << x << '\n';

    return 0;
}
