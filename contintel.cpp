#include <iostream>
using namespace std;
int main()
{
    int ini, fim, cont;
    cout << "INICIO = ";
    cin >> ini;
    cout << "FIM = ";
    cin >> fim;

    while (ini <= fim)
    {
        cout << ini << "... ";
        ini++;
    }
    while (ini >= fim)
    {
        cout << ini << "... ";
        ini--;
    }
    cout << endl;
    
    return 0;
}