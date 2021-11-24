#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

double calculo_irrf(double salario_bruto)
{

    double aliquota = 0;
    double desconto_irrf = 0;

    if (salario_bruto <= 1999.18)
    {
        aliquota = 0;
        desconto_irrf = salario_bruto * (aliquota / 100);
    }
    else if (salario_bruto >= 1999.19 && salario_bruto <= 2967.98)
    {
        aliquota = 7.5;
        desconto_irrf = salario_bruto * (aliquota / 100);
    }
    else if (salario_bruto >= 2967.99 && salario_bruto <= 3938.60)
    {
        aliquota = 15;
        desconto_irrf = salario_bruto * (aliquota / 100);
    }
    else if (salario_bruto >= 3938.61 && salario_bruto <= 4897.91)
    {
        aliquota = 22.5;
        desconto_irrf = salario_bruto * (aliquota / 100);
    }
    else
    {
        aliquota = 27.5;
        desconto_irrf = salario_bruto * (aliquota / 100);
    }
    return desconto_irrf;
}

double calculo_inss(double salario_bruto)
{

    double aliquota = 0;
    double desconto_inss = 0;

    if (salario_bruto <= 1659.38)
    {
        aliquota = 8;
        desconto_inss = salario_bruto * (aliquota / 100);
    }
    else if (salario_bruto >= 1659.39 && salario_bruto <= 2765.66)
    {
        aliquota = 9;
        desconto_inss = salario_bruto * (aliquota / 100);
    }
    else if (salario_bruto >= 2765.67 && salario_bruto <= 5531.31)
    {
        aliquota = 11;
        desconto_inss = salario_bruto * (aliquota / 100);
    }
    else if (salario_bruto > 5531.31)
    {
        aliquota = 11;
        desconto_inss = 5531.31 * (aliquota / 100);
    }
    else
    {
        desconto_inss = 0;
    }
    return desconto_inss;
}

int main()
{
    cout << "********************************************** \n";
    cout << "***     ROTEIRO V - PROCEDIMENTO I         *** \n";
    cout << "********************************************** \n";

    /* Definição das variáveis */
    double salario_bruto = 0;
    int opcao_calculo = 0;
    double salario_liquido = 0;
    double desconto_inss = 0;
    double desconto_irrf = 0;

    /* Atibuindo valor as variáveis */
    cout << "Informe o salário bruto.: R$ ";
    cin >> salario_bruto;

    /* Menu de Opção */
    cout << "\nCalculadora do Salário Líquido";
    cout << "\n  1: Desconto IRRF e INSS";
    cout << "\n  2: IRRF";
    cout << "\n  3: INSS";

    cout << "\n\nOpção: ";
    cin >> opcao_calculo;

    cout << setprecision(2)
         << fixed
         << "Procedimento para Cálculo do Salário Líquido\n"
         << "(+) Salário Bruto    .: R$ " << salario_bruto
         << "\n";

    switch (opcao_calculo)
    {
    case 1:
        desconto_irrf = calculo_irrf(salario_bruto);
        desconto_inss = calculo_inss(salario_bruto);
        salario_liquido = salario_bruto - (desconto_irrf + desconto_inss);

        cout << setprecision(2)
             << fixed
             << "(-) Desconto IRRF    .: R$ " << desconto_irrf << "\n"
             << "(-) Desconto INSS    .: R$ " << desconto_inss << "\n";
        break;
    case 2:
        desconto_irrf = calculo_irrf(salario_bruto);
        salario_liquido = salario_bruto - desconto_irrf;

        cout << setprecision(2)
             << fixed
             << "(-) Desconto IRRF    .: R$ " << desconto_irrf << "\n";
        break;
    case 3:
        desconto_inss = calculo_inss(salario_bruto);
        salario_liquido = salario_bruto - desconto_inss;

        cout << setprecision(2)
             << fixed
             << "(-) Desconto INSS    .: R$ " << desconto_inss << "\n";

        break;
    default:
        cout << "Descontos não calculados: Operacao inválida\n";
        break;
    }

    if (opcao_calculo == 1 || opcao_calculo == 2 || opcao_calculo == 3)
    {

        cout << setprecision(2)
             << fixed
             << "(=) Salário Líquido  .: R$ " << salario_liquido
             << "\n";
    }

    //system("pause");
    system("read -p 'Press any key to continue...' var");
}