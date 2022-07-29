#include <iostream>
using namespace std;
int main() {
    float c = 1, r, d, q;
    cout << "Quantas vezes você quer converter ? ";
    cin >> q;

    while (c <= q)
    {
        cout << "Informe um valor em reais : ";
        cin >> r;
        cout << "R$" << r << " em Dólar são " << r*5.24 << endl;
        c++;
    }
    

    return 0;
}