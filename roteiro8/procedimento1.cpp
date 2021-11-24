#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

/* função que retorna a situação do aluno */
string situacao_aluno(double media)
{
    if (media >= 0 && media < 50)
    {
        return "Reprovado";
    }
    else if (media >= 50 && media <= 70)
    {
        return "Exame";
    }
    else if (media > 70 && media <= 100)
    {
        return "Aprovado";
    }
    else
    {
        return "Erro no processamento";
    }
}

/* função que retorna a media do aluno */
double calculo_media(double notas[2])
{
    return (notas[1] + notas[2]) / 2;
}

int main()
{
    cout << "********************************************** \n";
    cout << "***  ROTEIRO VIII - SISTEMA DE AVALIAÇÕES  *** \n";
    cout << "********************************************** \n";

    /* Declarando as variáveis */
    int opcao = 0;
    int quantidade_nota = 2;
    double media_final = 0;
    double notas[quantidade_nota] = {0, 0, 0};

    while (opcao != 5)
    {
        /* Menu de Opção */
        cout << "\nMenu de Opções";
        cout << "\n  1: Inserir nota 1° Prova";
        cout << "\n  2: Inserir nota 2° Prova";
        cout << "\n  3: Mostrar média final";
        cout << "\n  4: Exibe notas e média final";
        cout << "\n  5: Encerrar Programa";
        cout << "\n\nOpção: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "\n  Informe a nota da 1° Prova: ";
            cin >> notas[1];
            break;
        case 2:
            cout << "\n  Informe a nota da 2° Prova: ";
            cin >> notas[2];
            break;
        case 3:
            media_final = calculo_media(notas);
            cout << setprecision(2)
                 << fixed
                 << "\nExibindo Média Final"
                 << "\n  Média Final: " << media_final
                 << "\n  Situação Final: " << situacao_aluno(media_final)
                 << "\n";
            break;
        case 4:
            media_final = calculo_media(notas);
            cout << setprecision(2)
                 << fixed
                 << "\nExibindo Notas e Média Final"
                 << "\n  Nota da 1° Prova: " << notas[1]
                 << "\n  Nota da 2° Prova:: " << notas[2]
                 << "\n  Média Final: " << media_final
                 << "\n  Situação Final: " << situacao_aluno(media_final)
                 << "\n";
            break;
        case 5:
            cout << "Programa Finalizado \n";
            break;
        default:
            cout << "Opção inválida \n";
            opcao = 5;
            break;
        }
    }

    //system("pause");
    system("read -p 'Press any key to continue...' var");
}