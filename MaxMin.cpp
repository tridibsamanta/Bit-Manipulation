/**
 * Title     : Find maximum and minimum of two integers
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int a = 10;
    int b = -15;

    int minVal = b ^ ((a ^ b) & -(a < b));

    cout << "min(" << a << "," << b << ") = " << minVal << '\n';

    int x = -15;
    int y = -10;

    int maxVal = x ^ ((x ^ y) & -(x < y));

    cout << "max(" << x << "," << y << ") = " << maxVal << '\n';

    return 0;
}
