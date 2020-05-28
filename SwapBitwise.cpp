/**
 * Title     : Swap two numbers
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int a = 6; // 0110
    int b = 7; // 0111

    cout << "Before swap : a = " << a << ", b = " << b << '\n';

    a ^= b; // a => 0110 ^ 0111 = 0001
    b ^= a; // b => 0111 ^ 0001 = 0110
    a ^= b; // a => 0001 ^ 0110 = 0111

    cout << "After swap : a = " << a << ", b = " << b << '\n';

    return 0;
}
