#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

int soma_antecessor (int numero) {
    int soma = 0;
    if (numero <= 0) {
        return 0;
    } else {
        soma = numero + soma_antecessor (numero - 1);
        return soma;
    }
}

int main()
{
    cout << "********************************************** \n";
    cout << "***     ROTEIRO VII - PROCEDIMENTO I        *** \n";
    cout << "********************************************** \n";

    /* Definição das variáveis */
    int numero_escolhido = 0;
    int soma = 0;
    
    /* Atibuindo valor as variáveis */
    cout << "Informe o número.: ";
    cin >> numero_escolhido;

    /* Invocando o método recursivo para realizar a soma dos antecessores */
    soma = soma_antecessor(numero_escolhido);

    /* Exibindo mensagem para o usuário */
    cout << "Soma: " << soma << "\n";

    //system("pause");
    system("read -p 'Press any key to continue...' var");
}