/**
 * Title     : Set Bit at Nth Position
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int pos = 3;

    int x = 0;  // 0000

    x |= (1 << pos);  // x = 0000 | 1000 = 1000

    cout << x << '\n';

    int y = 4;  // 0100

    y |= (1 << pos);  // y = 0100 | 1000 = 1100

    cout << y << '\n';

    return 0;
}
