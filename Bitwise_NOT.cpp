/**
 * Title     : Bitwise NOT
 * Author    : Tridib Samanta
**/

#include<iostream>
using namespace std;

int main() {

    // Bitwise complement of any number N is -(N+1)
    // 2's complement of ~N = -(N+1)

    int x = 25;
    cout << ~x << '\n';

    int y = -15;
    cout << ~y << '\n';

    return 0;
}
