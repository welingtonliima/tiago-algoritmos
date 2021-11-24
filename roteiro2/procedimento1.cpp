#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

int main()
{
    cout << "********************************************** \n";
    cout << "***     ROTEIRO II - PROCEDIMENTO I        *** \n";
    cout << "********************************************** \n";

    /* Definição das variáveis */
    int numero1;
    int numero2;
    int maior_numero;

    /* Atibuindo valor as variáveis */
    cout << "Informe o primeiro número.: ";
    cin >> numero1;

    cout << "Informe o segundo número.: ";
    cin >> numero2;

    /* Definindo o número maior */
    maior_numero = numero1;
    if (numero1 > numero2)
    {
        cout << "\n"
             << "O número da primeira entrada é maior: ";
    }
    else if (numero1 < numero2)
    {
        maior_numero = numero2;
        cout << "\n"
             << "O número da segunda entrada é maior: ";
    }
    else
    {
        cout << "\n"
             << "O número da primeira e segunda entrada são iguais: ";
    }

    /* Exibindo o maior número */
    cout << maior_numero << "\n";

    //system("pause");
    system("read -p 'Press any key to continue...' var");
}