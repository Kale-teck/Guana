#include <iostream>
#include <string>
using namespace std;
void menu()
{
   cout << "====================" << endl << "|      MENU        |" << endl << "====================" << endl << "|  [1] de 1 a 10   |" << endl << "|  [2] de 10 a 1   |" << endl << "|  [3]   sair      |" << endl << "====================" << endl;
}

int main()
{
   int n;

   do
   {
      menu();
      cin >> n;
      if (n == 1)
      {
         for (int i = 1; i <= 10; i++)
         {
            cout << i <<  "... ";
         }
         cout << endl;
      }
      if (n == 2)
      {
         for (int i = 10; i >= 1; i--)
         {
            cout << i << "... ";
         }
         cout << endl;
      }
   } while (n != 3);
   
   return 0;
}