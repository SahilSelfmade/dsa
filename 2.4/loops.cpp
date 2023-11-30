#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int sum = 0;
    // * FOR LOOP

    /*   for (int i = 1; i <= n; i++)
      {

          sum = sum + i;
          cout << sum << endl;
      } */
    // * WHILE LOOP
    /*   while (n > 0)
      {
          cout << n << endl;
          cin >> n;
      } */

    //  * DO WHILE LOOP
    /*
    //* LOOP RUNS FOR FIRST TIME IF FALSE


     */

    do
    {
        cout << n << endl;
        cin >> n;
    } while (n > 0);

    return 0;
}