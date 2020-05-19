/**
 * Title     : Bitwise OR
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int a = 3, b = 2;
    int or1 = a | b; cout << or1 << '\n';       // 0011 | 0010 = 0011 -> 3
    b = 4;
    int or2 = a | b; cout << or2 << '\n';       // 0011 | 0100 = 0111 -> 7
    b = 6;
    int or3 = a | b; cout << or3 << '\n';       // 0011 | 0110 = 0111 -> 7

    int or_by0 = a | 0;         // OR by 0's has no effect
    cout << or_by0 << '\n';

    int or_by1 = a | 15;         // OR by 1's creates 1's. 0011 | 1111 = 1111 -> 15
    cout << or_by1 << '\n';

    int a_or_a = a | a;         // OR by the number itself has no effect
    cout << a_or_a << '\n';

    return 0;
}
