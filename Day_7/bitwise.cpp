#include <iostream>
using namespace std;

int main()
{
    cout << "Bitwise and: " << (6 & 10) << endl;
    cout << "Bitwise or: " << (6 | 10) << endl;
    cout << "Bitwise xor: " << (6 ^ 10) << endl;

    cout << "Left shift: " << (10 << 2) << endl;
    cout << "Right shift: " << (10 >> 2) << endl;

    return 0;
}