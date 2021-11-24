#include <iostream> // std::cout, std::cin, std::fixed
#include <stdlib.h> // system
#include <iomanip>  // std::setprecision

using namespace std;

int main() {
     cout << "********************************************** \n";
     cout << "***     ROTEIRO II - PROCEDIMENTO II       *** \n";
     cout << "********************************************** \n";

     /* Definição das variáveis */   
     float nota_media;
     string conceito_media;

     /* Atibuindo valor as variáveis */
     cout << "Informe a média do aluno.: ";
     cin >> nota_media;

     /*Atribuindo o conceito da nota */
     if (nota_media >= 0 && nota_media <= 10){

          if (nota_media >= 0 &&  nota_media <= 3.9) {
               conceito_media = "REPROVADO";
          } else if (nota_media >= 4.0 &&  nota_media <= 5.9){
               conceito_media = "EXAME";
          } else {
               conceito_media = "APROVADO";
          }
     
          /* Exibindo o conceito da nota */
          cout << "Conceito da média escolar.: "<<conceito_media <<"\n";
    } else {
          cout << "Média escolar inválida, informe um valor entre 0 e 10. \n";
    }
    //system("pause");
    system("read -p 'Press any key to continue...' var");
}