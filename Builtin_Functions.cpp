/**
 * Title     : Builtin functions of the g++ compiler for counting bits
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int x = 24; // 00000000 00000000 00000000 00011000

    /*
     ~ __builtin_clz(x) : Returns the count of the number of leading zeros, from left to right,
       before the first occurrence of a set (1) bit. Only accepts unsigned integers.
     ~ __builtin_clzl(x) & __builtin_clzll(x), for long and long long data types respectively.
    */

    cout << "Number of leading 0's = " << __builtin_clz(x) << '\n';

    /*
     ~ __builtin_ctz(x) : Returns the count of the number of trailing zeros, from right to left,
       before the first occurrence of a set (1) bit. Only accepts unsigned integers.
     ~ __builtin_ctzl(x) & __builtin_ctzll(x), for long and long long data types respectively.
    */

    cout << "Number of trailing 0's = " << __builtin_ctz(x) << '\n';

    /*
     ~ __builtin_popcount(x) : Returns the count of the number of set (1) bits in the binary
       representation of a number.
     ~ __builtin_popcountl(x) & __builtin_popcountll(x), for long and long long data types respectively.
    */

    cout << "Number of 1's = " << __builtin_popcount(x) << '\n';

    /*
     ~ __builtin_parity(x) : check the parity (even or odd count) of the number of set (1) bits in the
       binary representation of a number. Returns true(1) for ODD parity and false(0) for EVEN parity.
     ~ __builtin_parityl(x) & __builtin_parityll(x), for long and long long data types respectively.
    */

    cout << (__builtin_parity(x) ? "Odd parity" : "Even parity") << '\n';

    return 0;
}
