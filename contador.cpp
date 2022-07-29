#include <iostream>
using namespace std;
int main() {

    int contador = 1, n, s, maior, menor = 999999;

    while (contador <= 5)
    {
        cout << "Informe o " << contador << "º valor : ";
        cin >> n;
        if (n > maior)
        {
            maior = n;
        }
        if (n < menor)
        {
            menor = n;
        }
        s = s + n;
        contador++;
    }
    cout << "A soma dos " << contador-1 << " valores digitados foi " << s << " e o maior valor digitado foi " << maior << " e o menor foi " << menor << endl;
    
    return 0;
}