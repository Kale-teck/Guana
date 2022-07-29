#include <iostream>
#include <string>
using namespace std;
int main()
{
   int n, c, f;
   string resposta = "sim";
   do
   {
   system("clear");
   cout << "Qual fatorial calcular ? ";
   cin >> n;
   c = n;
   f = 1;
   do
   {
      if (c == 1)
      {
         cout << c << " = ";
         break;
      }
      cout << c << " X ";
      f *= c;
      c--;
   } while (c > 0);
   cout << f << endl;
   cout << "Quer continuar ? [sim/não] ";
   cin >> resposta;
   } while (resposta == "sim");

   return 0;
}