#include <iostream>
using namespace std;
int main()
{
    int cont, nume, nega;

    do
    {
        cout << "digite um número : ";
        cin >> nume;
        if (nume < 0)
        {
            nega++;
        }
        cont++; 
    } while (cont < 5);
    cout << "Foram digitados " << nega << " valores negativos" << endl;
    
    return 0;
}