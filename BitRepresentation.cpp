/**
 * Title     : Bit representation of an integer number
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 31; i >= 0; --i) {
        if (n &(1 << i))
            cout << '1';
        else
            cout << '0';
    }
    return 0;
}
