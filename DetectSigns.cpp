/**
 * Title     : Detect if two integers have opposite signs
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    int a = 10;
    int b = -15;

    bool check = ((a ^ b) < 0);

    if (check)
        cout << "Integers have opposite signs\n";
    else
        cout << "Integers have same signs\n";

    int m = -10;
    int n = -15;

    bool check1 = ((m ^ n) < 0);

    if (check1)
        cout << "Integers have opposite signs\n";
    else
        cout << "Integers have same signs\n";

    return 0;
}
