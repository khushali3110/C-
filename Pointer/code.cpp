#include <iostream>
using namespace std;
int main()
{
    int a = 10;    // variable declared
    int *khushali = &a; // pointer variable declared and assign address of a.
    // value
    cout << "a : " << &a << endl;
    cout << "*khushali : " << *khushali << endl;
    // address
    cout << "Address of a : " << a << endl;
    cout << "Address of khushali : " << khushali << endl;
}