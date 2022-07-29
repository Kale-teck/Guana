#include <iostream>
using namespace std;

int main()
{
   int idade, cabelo;
   char sexo, conti;
   int homem, mulher;

   do
   {
   cout << "=======================" << endl << "| SELETOR DE PESSOAS  |" << endl << "=======================" << endl << "| QUAL O SEXO ? [m/f] |" << endl;
   cin >> sexo;
   cout << "|  QUAL IDADE ?    |" << endl;
   cin >> idade;
   cout << "--QUAL COR DO CABELO--" << endl << " [1] PRETO" << endl << " [2] CASTANHO"  << endl << " [3] LOIRO" << endl << " [4] RUIVO" << endl;
   cin >> cabelo;
   if (sexo=='m' && idade > 18 && cabelo==2)
   {
      homem++;
   }
   if (sexo=='f' && idade >= 25 && idade <= 30 && cabelo==3)
   {
      mulher++;
   }
   cout << "Deseja continuar ? [s/n] " << endl;
   cin >> conti;
   } while (conti == 's');
   
   cout << "O total de homens com mais de 18 anos e cabelos castanhos é " << homem << endl << "O total de mulheres entre 25 e 30 anos com cabelos loiros foi de " << mulher << endl;

   return 0;
}