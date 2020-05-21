/**
 * Title     : Count set bits in an integer (Brian Kernighan's Algorithm)
 * Author    : Tridib Samanta
**/

#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1);
        ++count;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Set bits = " << countSetBits(n) << '\n';
    return 0;
}

/*
 ~ Time Complexity   : O(log n)
 ~ Space Complexity  : O(1)
*/
