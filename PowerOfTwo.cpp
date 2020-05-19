/**
 * Title     : Check if an integer is a power of two
 * Author    : Tridib Samanta
**/

#include<bits/stdc++.h>
using namespace std;

bool checkPowerOfTwo(int n) {
    if (n < 1)
        return false;
    return !(n & (n - 1));
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << (checkPowerOfTwo(n) ? "True" : "False") << '\n';
    return 0;
}

/*
 ~ Time Complexity   : O(1)
 ~ Space Complexity  : O(1)
*/

