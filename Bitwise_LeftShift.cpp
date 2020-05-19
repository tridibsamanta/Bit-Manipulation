/**
 * Title     : Bitwise Left Shift
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int n = 3;
    int ls0 = n << 0; cout << ls0 << '\n';      // 0011 << 0 = 0011 -> 3
    int ls1 = n << 1; cout << ls1 << '\n';      // 0011 << 1 = 0110 -> 6
    int ls2 = n << 2; cout << ls2 << '\n';      // 0011 << 2 = 1100 -> 12

    int power2 = 1 << 3;        // 0001 << 3 = 1000 -> 8
    cout << power2 << '\n';

    int k = 2;
    int ls = n << k;            // n*(2^k) = 3*(2^2) = 3*4 -> 12
    cout << ls << '\n';

    cout << 3<<2; // Not 12, as in c++, the << operator is also overloaded for iostream output
    cout << (3<<2); // Now it prints 12. Don't forget to use that extra parenthesis

    return 0;
}
