#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

int main()
{
    cout << "********************************************** \n"
         << "***     ROTEIRO I - PROCEDIMENTO I         *** \n"
         << "********************************************** \n";

    const string nome_aluno = "Tiago Santos";
    const int idade = 28;

    /* Exibindo os dados */
    cout << "Nome: " << nome_aluno 
         << "\nIdade: " << idade 
         << "\n";

    //system("pause");
    system("read -p 'Press any key to continue...' var");
}


/*
Explicações
    - Todo o arquivo utilizando a linguagem de programção c++ deve ser utilizada a extensão cpp, que é a abreviação de (cPlusPlus).
    - O programa sempre é iniciado pela função main e nela que devo escrever o programa ou invocar outras funções que podem estar no mesmo arquivo
      ou em outras bibliotecas da própria linguagem ou escrita pelo desenvolvedor. 
    - #include <iostream>: importado para utilizar os comandos de entrada (cin) que é a abreviação de cInput, 
                           comandos de saída (cout) que é a abreviação de cOutput e
                           comandos de erro (ceer).
    - #include <stdlib.h>: importado para utilizar o comando de pausar a execução do programa system("pause") ou system("read -p 'Press any key to continue...' var")
                           depedendo do complidador ou sistema operacional.
    - namespace std: para evitar que em todas as funções padrões da linguagens seja informado antes da funçã a instução "std::". Exemplo std::cin || std::cout
    - Comentários: Para comentar apenas uma linha podemos utilizar o caracter "//" agora um conjunto de caracteres devemos utilizar *//*
    - Quebra de Linha: Para quebra de linha podemos utilizar o comando << endl ou \n
    - Concactenção: Para concactenação devemos utilizar << ou + depende da situação.
    - Constantes: Define uma várivel constrante quando o seu valor não será alterado na execução do programa.
    - Recebendo Strings (Palavras/Frases): Utilizar a instrução getline(cin, nomeVariavelAtribuicao) para receber todo o texto e não apenas uma parte dele até o primeiro
                                            espaço em branco.
    - Tipo de Variaveis: As mais comuns são a string para recebimento de caracteres, int para numeros inteiros, float/double para números flutuantes e bool para boleanos.
    - Tipo de Operadores: Aritmeticos temos o +(adição), - (subtração),  * (multiplicacação), / (divisão), %(módulo), -- (decremento), ++ (incremento) 
                          Relacional  temos o ==(Igualdade), != (Diferente de),  > (Maior que), >= (Maior ou igual que), < (Menor que), <= (Menor ou igual que)
                          Lógicos temos o && (conjunção), || (disjunção), ! (negação)
*/