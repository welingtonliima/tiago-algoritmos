#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

int main()
{
    cout << "********************************************** \n";
    cout << "***     ROTEIRO III - PROCEDIMENTO II      *** \n";
    cout << "********************************************** \n";

    /* Definição das variáveis */
    double nota[3];
    int operacao;
    double resultado;

    for (int n = 1; n <= 3; n++)
    {
        cout << "Informe a " << n << "ª nota: ";
        cin >> nota[n];
    }

    /* Menu de Opção */
    cout << "\nCalculadora da Média";
    cout << "\n  1: Média Aritmética";
    cout << "\n  2: Média Ponderada";
    cout << "\n  3: Soma das Notas";

    cout << "\n\nOpção: ";
    cin >> operacao;

    /* Calculando as médias */
    switch (operacao)
    {
    case 1:
        resultado = (nota[1] + nota[2] + nota[3]) / 3;
        cout << setprecision(2)
             << fixed
             << "\nMédia Aritmética = " << resultado
             << "\n";
        break;
    case 2:
        resultado = ((nota[1] * 5) + (nota[2] * 3) + (nota[3] * 2)) / (5 + 3 + 2);
        cout << setprecision(2)
             << fixed
             << "\nMédia Ponderada = " << resultado
             << "\n";
        break;
    case 3:
        resultado = (nota[1] + nota[2] + nota[3]);
        cout << setprecision(2)
             << fixed
             << "\nSoma das Notas= " << resultado
             << "\n";
        break;
    default:
        cout << "\n"
             << "Operacao inválida\n";
    }

    //system("pause");
    system("read -p 'Press any key to continue...' var");
}
