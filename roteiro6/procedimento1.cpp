#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

string formata_numero(float numero)
{
    string num_text = to_string(numero);
    return num_text.substr(0, num_text.find("."));
}

int main()
{
    cout << "********************************************** \n";
    cout << "***     ROTEIRO VI - PROCEDIMENTO I        *** \n";
    cout << "********************************************** \n";

    /* Definição das variáveis */
    int tamanho_vetor = 20;
    int numero[tamanho_vetor];
    int numero_escolhido = 0;
    bool acertou = false;
    string exibindo_vetor = "[";

    /* Populando o vetor com valores randômicos de 0 a 50 */
    for (int i = 0; i < tamanho_vetor; i++)
    {
        numero[i] = rand() % 50;
        if ((tamanho_vetor - 1) == i)
        {
            exibindo_vetor = exibindo_vetor + formata_numero(numero[i]) + "]";
            break;
        }
        exibindo_vetor = exibindo_vetor + formata_numero(numero[i]) + ", ";
    }

    /* Recebendo valor do usuário */
    cout << "Escolha um número de 1 a 50: ";
    cin >> numero_escolhido;

    /* Exibindo o vetor gerado */
    cout << "Vetor: " << exibindo_vetor << "\n";

    /* Procediemnto para encontrar o valor no vetor */
    for (int i = 0; i < tamanho_vetor; i++)
    {

        if (numero_escolhido == numero[i])
        {
            acertou = true;
            cout << "O número selecionado está na posição: " << i + 1 << "\n";
        }
    }

    /* Exbindo mensagem quando não acertar o palpite */
    if (acertou == false)
    {
        cout << "O número selecionado não está no vetor \n";
    }
    
    //system("pause");
    system("read -p 'Press any key to continue...' var");
}