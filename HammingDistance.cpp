/**
 * Title     : Calculate the Hamming Distance (Integer values)
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int a = (1 << 0) | (1 << 2) | (1 << 3);
    int b = (1 << 0) | (1 << 3) | (1 << 4);

    int hammingDistance = __builtin_popcount(a ^ b);

    cout << "Hamming Distance : " << hammingDistance << '\n';

    return 0;
}
