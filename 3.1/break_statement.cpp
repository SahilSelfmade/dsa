#include <iostream>

using namespace std;

int main()
{

  /*   int pocketMoney = 3000;
    cout << "\nTotal Pocket Money:" << pocketMoney;

    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 == 0)
        {

            cout << "\nDate:" << date << "\n";
            continue;
        }

        if (pocketMoney == 0)
        {

            break;
        }

        pocketMoney = pocketMoney - 1000;
        cout << "Pocket Money:" << pocketMoney;
    } */

  int n;
  int i;
  cin >> n;

  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      cout << "\nNon Prime" << endl;
      break;
    }
  }
  if (i == n)
  {

    cout << "Prime" << endl;
  }

  return 0;
}