#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "bingo.h"
#include "desenvolvedor.h"

void programa(){
    int opcao;
    bool programa = true;

    while(programa){                            //Laço de repetição do programa
        cout << "Digite o numero da opcao desejada:\n\n\ 1 - Inicio do jogo BINGO\t\t\ 2 - Desenvolvedor\t\t\t\ 3 - Sair \t \t\t\t";
        cin >> opcao;
    system("cls");
        if(opcao >= 1 && opcao <= 4){
            switch (opcao){                         //Menu
                case 1://jogo bingo
                    bingo();
                    break;

                case 2://<Desenvolvedor
                    desenvolvedor();
                    break;

                case 3://Sair do programa
                    programa = false;
                    break;
            }
        } else {                                    //Caso a opção seja maior que 4 ou menor que 1
            cout << "Opcao invalida!";
            _sleep(1000);
    system("cls");
        }

    }
}



#endif // MENU_H_INCLUDED
