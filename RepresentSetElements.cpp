/**
 * Title     : Represent set elements as an n-bit integer
 * Author    : Tridib Samanta
**/

#include<bits/stdc++.h>
using namespace std;

int main() {

    // Let's see how the set {1,3,4,8} can be stored in x
    int arr[4] = {1,3,4,8};

    // As int is a 32-bit type, an int number can represent any subset of the set {0,1,2,...,31}
    int x = 0;

    x |= (1 << 1); // x = 00000000 00000000 00000000 00000010
    x |= (1 << 3); // x = 00000000 00000000 00000000 00001010
    x |= (1 << 4); // x = 00000000 00000000 00000000 00011010
    x |= (1 << 8); // x = 00000000 00000000 00000001 00011010

    // Print the set elements
    cout << "Set elements : ";
    for (int i = 0; i < 32; ++i) {
        if (x & (1 << i))
            cout << i << ' ';
    }
    cout << '\n';

    // Size of the set
    cout << "Size = " << __builtin_popcount(x) << '\n';

    return 0;
}
