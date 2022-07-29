#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, s;
    string resp;
    s = 0;

    do {
        cout << "Digite o valor ";
        cin >> n;
        s += n;
        cout << "Você quer continuar [sim/não] ";
        cin >> resp;
    } while (resp == "sim");

    cout << "A soma de todos os valores é " << s << endl;
    return 0;
}