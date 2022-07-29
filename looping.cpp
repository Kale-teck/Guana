#include <iostream>
using namespace std;
int main()
{
    int contador = 0, valor, salto;
    cout << "Até onde você quer contar ? ";
    cin >> valor;
    cout << "Qual será o salto ? ";
    cin >> salto;

    while (contador <= valor)
    {
        cout << contador << endl;
        contador = contador + salto;
    }
    cout << "Terminei de contar " << endl;
    
    return 0;
}