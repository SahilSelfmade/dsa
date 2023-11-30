#include <iostream>
using namespace std;

int main()
{

    int a; // Declaration variables

    a = 12; // Initialization variables

    cout << "Size of int is " << sizeof(a) << endl;

    float b;

    b = 12.12;

    cout << "Size of float is " << sizeof(b) << endl;

    char c;

    c = 'a';

    cout << "Size of char is " << sizeof(c) << endl;

    bool d;

    d = true;

    cout << "Size of bool is " << sizeof(d) << endl;

    short int si;
    long int li;
    cout << "Size of shortint is " << sizeof(si) << endl;
    cout << "Size of longint is " << sizeof(li) << endl;

    return 0;
}