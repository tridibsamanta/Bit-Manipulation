/**
 * Title     : Bitwise XOR
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int a = 3, b = 2;
    int xor1 = a ^ b; cout << xor1 << '\n';       // 0011 ^ 0010 = 0001 -> 1
    b = 4;
    int xor2 = a ^ b; cout << xor2 << '\n';       // 0011 ^ 0100 = 0111 -> 7
    b = 6;
    int xor3 = a ^ b; cout << xor3 << '\n';       // 0011 ^ 0110 = 0101 -> 5

    int xor_by0 = a ^ 0;        // XOR by 0's has no effect
    cout << xor_by0 << '\n';

    int xor_by1 = a ^ 15;       // XOR by 1's inverts all the bits. 0011 ^ 1111 = 1100 -> 12
    cout << xor_by1 << '\n';

    int a_xor_a = a ^ a;         // XOR by the number itself creates 0's. 0011 ^ 0011 = 0000 -> 0
    cout << a_xor_a << '\n';

    return 0;
}
