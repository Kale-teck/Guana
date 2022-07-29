#include <iostream>
using namespace std;
int main()
{
   int f=5, c=1;

   do
   {
      if (f==1)
      {
         cout << f << " = ";
         break;;
      }
      cout << f << " X ";
      c *= f;
      f--;
   } while (f > 0);

   cout << c << endl;
   
   return 0;
}