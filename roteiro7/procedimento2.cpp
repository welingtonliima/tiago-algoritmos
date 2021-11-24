#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;


/* Função recursiva para recuperar o valor da posição informada */
int finobacci(int posicao)
{
    if (posicao == 0)
    {
        return 0;
    }
    else if (posicao == 1)
    {
        return 1;
    }
    else
    {
        return finobacci(posicao - 1) + finobacci(posicao - 2);
    }
}

int main()
{
    cout << "********************************************** \n";
    cout << "***     ROTEIRO VII - PROCEDIMENTO II      *** \n";
    cout << "********************************************** \n";

    /* Definição das variáveis */
    int numero_fibonacci = 0;
    int valor_fibonacci = 0;

    /* Atibuindo valor as variáveis */
    cout << "Informe a quantidade de valores Fibonacci.: ";
    cin >> numero_fibonacci;

    cout << "Finobacci: [";

    /* Invocando a função recursiva para exibição da sequencia de fibonacci */
    for (int i = 0; i < numero_fibonacci; i++)
    {
        valor_fibonacci = finobacci(i);

        if ((numero_fibonacci - 1) == i)
        {
            cout << valor_fibonacci 
                 << "...] "
                 << "\n";
            break;
        }
        cout << valor_fibonacci 
             << ", ";
    }

    //system("pause");
    system("read -p 'Press any key to continue...' var");
}