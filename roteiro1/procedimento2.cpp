#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

int main()
{
     cout << "********************************************** \n";
     cout << "***     ROTEIRO I - PROCEDIMENTO II        *** \n";
     cout << "********************************************** \n";

     /* Declarando  valor as variáveis */
     string nome_pessoa;
     int ano_nascimento;
     int ano_atual;
     int idade;

     /* Atibuindo valor as variáveis */
     cout << "Informe o nome.: ";
     getline(cin, nome_pessoa);

     cout << "Informe o ano de nascimento.: ";
     cin >> ano_nascimento;

     cout << "Informe o ano atual.: ";
     cin >> ano_atual;

     /* Calculando a idade */
     idade = ano_atual - ano_nascimento;

     /* Exibindo os dados */
     cout << "\n"
          << "Dados da Pessoa\n"
          << "Nome: " << nome_pessoa << "\n"
          << "Idade: " << idade << "\n";

     //system("pause");
     system("read -p 'Press any key to continue...' var");
}