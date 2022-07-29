#include <iostream>
#include <string>
using namespace std;
int main()
{
    int alun;
    string nome, nomeMelhor;
    float notaMelhor, nota;
    cout << "-------------------------------" << endl << "------ESCOLA SANTA PACIÊNCIA ------" << endl << "-------------------------------" << endl << "QUANTOS ALUNOS(AS) A SALA TEM ??? ";
    cin >> alun;

    for (int i = 1; i <= alun; i++)
    {
        cout << endl << "ALUNO(A) " << i << endl;
        cout << "NOME DO ALUNO(A) : ";
        cin >> nome;
        cout << "NOTA DO ALUNO(A) : ";
        cin >> nota;
        /*
        if (nota == 0 || nome == "")
        {
            cout << endl << "DADOS INVÁLIDOS" << endl;
            break;
        }
        */
        if (nota > notaMelhor)
        {
            notaMelhor = nota;
            nomeMelhor = nome;
        }
    }
    
    cout << "O melhor aluno(a) da turma foi " << nomeMelhor << " que tirou " << notaMelhor << " pontos!" << endl;
    return 0;
}