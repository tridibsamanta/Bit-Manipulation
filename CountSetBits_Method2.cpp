/**
 * Title     : Count set bits in an integer (Mapping number with bits for a nibble)
 * Author    : Tridib Samanta
**/

#include<bits/stdc++.h>
using namespace std;

int num_to_bits[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};

int countSetBits(int n) {
    int nibble = 0;
    if (n == 0)
        return num_to_bits[0];
    nibble = n & 0xf;
    return num_to_bits[nibble] + (n >> 4);
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Set bits = " << countSetBits(n) << '\n';
    return 0;
}

/*
 ~ Time Complexity   : O(1)
 ~ Space Complexity  : O(1), ignoring recursive call stack.
*/
