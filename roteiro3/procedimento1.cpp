#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

int main()
{
    cout << "********************************************** \n";
    cout << "***     ROTEIRO III - PROCEDIMENTO I       *** \n";
    cout << "********************************************** \n";

    /* Definição das variáveis */
    double numero1;
    double numero2;
    int operacao;
    double resultado;

    /* Atibuindo valor as variáveis */
    cout << "Informe o primeiro número.: ";
    cin >> numero1;

    cout << "Informe o segundo número.: ";
    cin >> numero2;

    /* Menu de Opção */
    cout << "\nCalculadora";
    cout << "\n  1: Soma";
    cout << "\n  2: Subtração";
    cout << "\n  3: Multiplicação";
    cout << "\n  4: Divisão";
    cout << "\n\nOpção: ";
    cin >> operacao;

    /* Calculando as operações */
    switch (operacao)
    {
    case 1:
        resultado = numero1 + numero2;
        cout << setprecision(2)
             << fixed
             << "\nSoma -> " << numero1 << " + " << numero2 << " = " << resultado
             << "\n";
        break;
    case 2:
        resultado = numero1 - numero2;
        cout << setprecision(2)
             << fixed
             << "\nSubtração -> " << numero1 << " - " << numero2 << " = " << resultado
             << "\n";
        break;
    case 3:
        resultado = numero1 * numero2;
        cout << setprecision(2)
             << fixed
             << "\nMultiplicação -> " << numero1 << " * " << numero2 << " = " << resultado
             << "\n";
        break;
    case 4:
        if (numero2 == 0)
        {
            cout << "\n"
                 << "Não é possivel realizar divisão por 0."
                 << "\n";
            break;
        }
        resultado = numero1 / numero2;
        cout << setprecision(2)
             << fixed
             << "\nDivisão -> " << numero1 << " / " << numero2 << " = " << resultado
             << "\n";
        break;
    default:
        cout << "\n"
             << "Operacao inválida\n";
    }

    //system("pause");
    system("read -p 'Press any key to continue...' var");
}