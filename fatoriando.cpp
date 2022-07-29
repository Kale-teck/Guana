#include <iostream>
using namespace std;
int main()
{
   int f = 3;
   int m = 1;

   do
   {
      if (f==1)
      {
         cout << f << " = ";
         break;
      }
      cout << f << " X ";
      m *= f;
      f--;
   } while (f > 0);

   cout << m << endl;
   
   return 0;
}