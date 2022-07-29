#include <iostream>
using namespace std;
int main()
{
   int va[10], vb[10], vc[20], a = 0, b = 0;

   for (int i = 0; i < 10; i++)
   {
      va[i] = i + 1;
   }

   for (int p = 9; p > -1; p--)
   {
      vb[p] = p + 1;
   }

   for (int j = 0; j < 20; j++)
   {
      if (j%2 != 0)
      {
         vc[j] = vb[a];
         a++;
      }
      if (j%2==0)
      {
         vc[j] = va[b];
         b++;
      }
   }
   
   for (int k = 0; k < 19; k++)
   {
      cout << vc[k] << "  ";
   }
   
   return 0;
}