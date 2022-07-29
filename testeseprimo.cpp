#include <iostream>
using namespace std;
int main()
{
   int c = 1, n, contDiv=0;
   cin >> n;

   while (c < (n+1))
   {
      if (n%c==0)
      {
         contDiv += 1;
      }
      c++;
   }
   if (contDiv == 2)
   {
      cout << n << " é primo, pois existem " << contDiv << " valores pelos quais " << n << " é divisível " <<  endl;
   } else {
      cout << n << " não é primo, pois existem " << contDiv << " valores pelos quais " << n << " é divisível " <<  endl;
   }
   return 0;
}