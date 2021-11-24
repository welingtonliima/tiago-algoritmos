#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

double retona_velocidade(int hora, int variacao_tempo)
{
    int hora_inicial = 8;
    int tempo_inicial = 60;
    int razao = 5;
    double tempo = 0;

    tempo = tempo_inicial - ((hora - hora_inicial) * razao);
    return variacao_tempo / tempo;
}

int main()
{
    cout << "********************************************** \n";
    cout << "***     ROTEIRO V - PROCEDIMENTO II        *** \n";
    cout << "********************************************** \n";

    /* Definição das variáveis */
    int hora;
    double variacao_tempo = 0;
    double velocidade = 0;

    for (int i = 0; i < 24; i++)
    {
        hora = i;
        switch (hora)
        {
        case 8:
            variacao_tempo = 60;
            velocidade = retona_velocidade(hora, variacao_tempo);
            break;
        case 10:
            variacao_tempo = 50;
            velocidade = retona_velocidade(hora, variacao_tempo);
            break;
        case 12:
            variacao_tempo = 40;
            velocidade = retona_velocidade(hora, variacao_tempo);
            break;
        case 14:
            variacao_tempo = 30;
            velocidade = retona_velocidade(hora, variacao_tempo);
            break;
        case 16:
            variacao_tempo = 30;
            velocidade = retona_velocidade(hora, variacao_tempo);
            break;
        default:
            cout << setprecision(2)
                 << fixed
                 << "v(" << hora << ") => Hora inválida"
                 << "\n";
        }

        if (variacao_tempo > 0)
        {
            cout << setprecision(2)
                 << fixed
                 << "v(" << hora << ") => " << velocidade
                 << "\n";
        }

        variacao_tempo = 0;
    }

    //system("pause");
    system("read -p 'Press any key to continue...' var");
}