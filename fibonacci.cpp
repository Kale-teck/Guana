#include <iostream>
using namespace std;
int main()
{
   int a=1, b=0, c=1;

   for (int i = 0; i < 13; i++)
   {
      a = b + c;
      if (a==1)
      {
         cout << a << " ";
      }
      cout << a << " ";
      b = c;
      c = a;
   }
   
   return 0;
}