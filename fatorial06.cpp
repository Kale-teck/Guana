#include <iostream>
using namespace std;
int main()
{
   int fatorial = 3;
   int multiplicador = 1;

   do
   {
      if (fatorial==1)
      {
         cout << fatorial << " = ";
         break;
      }
      cout << fatorial << " X ";
      multiplicador *= fatorial;
      fatorial--;
   } while (fatorial > 0);
   cout << multiplicador << endl;
   return 0;
}