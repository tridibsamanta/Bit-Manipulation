/**
 * Title     : Case Conversion using Bit Manipulation
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    char upper_a = 'A';
    char lower_a = upper_a | 0x20;      // turns on the 20th bit
    cout << lower_a << '\n';

    char upper_b = 'B';
    char lower_b = upper_b | 0x20;      // turns on the 20th bit
    cout << lower_b << '\n';

    char lower_a1 = 'a';
    char upper_a1 = lower_a1 & ~0x20;   // turns off the 20th bit
    cout << upper_a1 << '\n';

    char lower_z = 'z';
    char upper_z = lower_z & ~0x20;     // turns off the 20th bit
    cout << upper_z << '\n';

    char diff = 'a' - 'A';              // diff -> 20h
    char mask = ~diff;                  // NOT(~) of 20h -> DFh
    char lower_y = 'y';
    char upper_y = lower_y & mask;      // turns off the 20th bit
    cout << upper_y << '\n';

    char lower_c = 'c';
    char upper_c = lower_c & ~' ';      // ' ' bit pattern is 20h. turns off the 20th bit
    cout << upper_c << '\n';

    char upper_d = 'D';
    char lower_d = upper_d | ' ';       // turns on the 20th bit
    cout << lower_d << '\n';

    return 0;
}

/*
    Notes:
    1. To convert any ASCII letter to lowercase, we must turn on the 20th bit.
       Mask - 0010 0000 (20h). Perform OR operation.
    2. To convert any ASCII letter to uppercase, we must turn off the 20th bit.
       Mask - 1101 1111 (~20h). Perform AND operation.

    N.B.:
    1. Don't use addition operation in case of ORing as it may cause a carry.
    2. Don't use subtraction operation in case of masking as it may cause a borrow.
*/

