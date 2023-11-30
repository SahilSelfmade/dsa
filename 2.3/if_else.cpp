#include <iostream>
using namespace std;

int main()
{

    int a;
    int b;
    int c;

    cin >> a >> b >> c;
    if (a > b)
    {
        /* code */
        if (a > c)
        {

            cout << "a is greater";
        }
        else
        {
            cout << "c is greater";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b is greater";
        }
        else
        {
            cout << "c is greater";
        }
    }
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }

    return 0;
}