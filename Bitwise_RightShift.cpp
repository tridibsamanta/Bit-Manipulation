/**
 * Title     : Bitwise Right Shift
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int n = 3;
    int rs0 = n >> 0; cout << rs0 << '\n';      // 0011 >> 0 = 0011 -> 3
    int rs1 = n >> 1; cout << rs1 << '\n';      // 0011 >> 1 = 0001 -> 1
    int rs2 = n >> 2; cout << rs2 << '\n';      // 0011 >> 2 = 0000 -> 0

    int k = 2; n = 12;
    int rs = n >> k;            // n/(2^k) = 12/(2^2) = 12/4 -> 3
    cout << rs << '\n';

    int lsrs = (n<<k)>>k;       // (n<<k)>>k -> n, unless overflow of bits
    cout << lsrs << '\n';

    return 0;
}
