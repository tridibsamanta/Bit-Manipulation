/**
 * Title     : Implementation of Set operations via Bit operations
 * Author    : Tridib Samanta
**/

/*
            Operation       set syntax      bit syntax

            intersection    a ∩ b           a & b
            union           a U b           a | b
            complement      ā               ~a
            difference      a - b           a & (~b)
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

    int a = (1 << 1) | (1 << 3) | (1 << 4) | (1 << 8); // a = {1, 3, 4, 8}
    cout << "a : ";
    for (int i = 0; i < 32; ++i) {
        if (a & (1 << i))
            cout << i << ' ';
    }
    cout << '\n';

    int b = (1 << 3) | (1 << 6) | (1 << 8) | (1 << 9); // b = {3, 6, 8, 9}
    cout << "b : ";
    for (int i = 0; i < 32; ++i) {
        if (b & (1 << i))
            cout << i << ' ';
    }
    cout << '\n';

    // x = a ∩ b -> a & b
    int x = a & b; // x = {3,8}
    cout << "a intersection b : ";
    for (int i = 0; i < 32; ++i) {
        if (x & (1 << i))
            cout << i << ' ';
    }
    cout << '\n';

    // x = a U b -> a | b
    x = a | b; // x = {1, 3, 4, 6, 8, 9}
    cout << "a union b : ";
    for (int i = 0; i < 32; ++i) {
        if (x & (1 << i))
            cout << i << ' ';
    }
    cout << '\n';

    // x = ā -> ~a
    x = ~a; // x represents 28 elements, those which are not present in set 'a'
    cout << "complement of a : ";
    for (int i = 0; i < 32; ++i) {
        if (x & (1 << i))
            cout << i << ' ';
    }
    cout << '\n';

    // x = a - b -> a & (~b)
    x = a & (~b); // x = {1, 4}
    cout << "difference of set B from set A : ";
    for (int i = 0; i < 32; ++i) {
        if (x & (1 << i))
            cout << i << ' ';
    }
    cout << '\n';

    return 0;
}
