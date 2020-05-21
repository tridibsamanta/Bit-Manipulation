/**
 * Title     : Count set bits in an integer (Using bitwise operator)
 * Author    : Tridib Samanta
**/

#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countSetBits(n) << '\n';
    return 0;
}

/*
 ~ Time Complexity   : O(log n)
 ~ Space Complexity  : O(1)
*/
