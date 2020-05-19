/**
 * Title     : Bitwise AND
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int a = 3, b= 2;
    int and1 = a & b; cout << and1 << '\n';     // 0011 & 0010 = 0010 -> 2
    b = 4;
    int and2 = a & b; cout << and2 << '\n';     // 0011 & 0100 = 0000 -> 0
    b = 6;
    int and3 = a & b; cout << and3 << '\n';     // 0011 & 0110 = 0010 -> 2

    int and_by1 = a & ~0;       // AND by 1's has no effect
    cout << and_by1 << '\n';

    int and_by0 = a & 0;        // AND by 0's used for masking out bits
    cout << and_by0 << '\n';

    int a_and_a = a & a;        // AND by the number itself has no effect
    cout << a_and_a << '\n';

    // Check if the bit 3 of an integer is set
    int mask = (1 << 3);        // 1000
    int n = 8;
    if ((n & mask) != 0)        // 1000 & 1000 = 1000 -> 8 != 0
        cout << "Bit is set\n";
    else
        cout << "Bit is not set\n";

    // Check if a number is even or odd. LSB is set(1) for ODD & 0 for EVEN
    n = 15;
    if ((n & 1) != 0)           // 1111 & 1 = 0001 -> 1 != 0
        cout << "Odd\n";
    else
        cout << "Even\n";

    return 0;
}
