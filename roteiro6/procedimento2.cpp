#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

int main()
{
    cout << "********************************************** \n";
    cout << "***     ROTEIRO VI - PROCEDIMENTO II       *** \n";
    cout << "********************************************** \n";

    /* Declarando as variáveis*/
    int numero_caracter = 0;
    string frase = "a";

    /* Recebendo a frase do usuário, para rebecer a frase com 
       espaço em branco precisa do método getline().    */
    cout << "Digite uma frase: ";
    getline(cin, frase);

    /* Estrutura de repetição para realizando da contagem */
    for (char i : frase) {
        numero_caracter++;
    }

    /* Exibindo mensagem para o usuário */
    cout << "Quantidade de caracteres: " << numero_caracter << "\n";

    
    //system("pause");
    system("read -p 'Press any key to continue...' var");
}