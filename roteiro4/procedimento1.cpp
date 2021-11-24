#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

int main()
{
    cout << "********************************************** \n";
    cout << "***     ROTEIRO IV - PROCEDIMENTO I        *** \n";
    cout << "********************************************** \n";

    /* Definição das variáveis */
    int execucao = 1;

    cout << "Procedimento Exemplo\n";
    for (int m = 0; m <= 5; m++)
    {
        for (int n = 0; n <= 5; n++)
        {
            cout << execucao << "ª Execução = Variáveis: " << m << "," << n << "\n";
            execucao++;
        }
    }

    cout << "\nProcedimento Modificado\n";
    execucao = 1;
    for (int m = 0; m <= 3; m++)
    {
        for (int n = 0; n <= 5; n++)
        {
            cout << execucao << "ª Execução = Variáveis: " << m << "," << n << "\n";
            execucao++;
        }
    }
    //system("pause");
    system("read -p 'Press any key to continue...' var");
}