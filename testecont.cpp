#include <iostream>
using namespace std;
int main()
{
    int contador, n;
    n = 7;

    do
    {
        cout << n << " X " << contador << " = " << n*contador << endl;
        contador += 1;
    } while (contador <= 10);
    
    return 0;
}