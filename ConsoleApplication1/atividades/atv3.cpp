#include <string>
#include <iostream>

//Estrutura e print do jogo da velha
char tabelas[3][3] = {
   {'_','_','_'},
   {'_','_','_'},
   {' ',' ',' '}
};

void printBoard()
{
    std::cout << tabelas[0][0] << "|" << tabelas[0][1] << "|" << tabelas[0][2] << "\n";
    //std::cout << "----- \n";
    std::cout << tabelas[1][0] << "|" << tabelas[1][1] << "|" << tabelas[1][2] << "\n";
    //std::cout << "----- \n";
    std::cout << tabelas[2][0] << "|" << tabelas[2][1] << "|" << tabelas[2][2] << "\n";
}

//Variavel dos jogadores
int colunaP1;
int linhaP1;

int colunaP2;
int linhaP2;

int condicao = 0;
int condicao2 = 0;

int turnoJogador = 1;

void coordenadasP1() {
    condicao = 0;
    while (condicao == 0) {
        std::cout << "Digite o numero da coluna: \n";
        std::cin >> colunaP1;
        std::cout << "Digite o numero do pilar: \n";
        std::cin >> linhaP1;
        condicao = condicao + 1;
        //verificar se aquela linha e coluna ja foram imputada
        if (colunaP1 > 2 || linhaP1 > 2) {
            condicao = condicao - 1;
        }
        if (colunaP1 < 0 || linhaP1 < 0) {
            condicao = condicao - 1;
        }
        if (tabelas[linhaP1][colunaP1] == 'O' || tabelas[linhaP1][colunaP1] == 'X') {
            condicao = condicao - 1;
        }

    }
}

void coordenadasP2() {
    condicao2 = 0;
    while (condicao2 == 0) {
        std::cout << "Digite o numero da coluna: \n";
        std::cin >> colunaP2;
        std::cout << "Digite o numero do pilar: \n";
        std::cin >> linhaP2;
        condicao2 = condicao2 + 1;
        if (colunaP2 > 2 || linhaP2 > 2) {
            condicao2 = condicao2 - 1;
        }
        if (colunaP2 < 0 || linhaP2 < 0) {
            condicao2 = condicao2 - 1;
        }
        if (tabelas[linhaP2][colunaP2] == 'O' || tabelas[linhaP2][colunaP2] == 'X') {
            condicao2 = condicao2 - 1;
        }
    }
}

//comeco do jogo
void jogo() {
    for (int x = 0; x < 9; x++) {
        std::cout << "Turno do jogador" << turnoJogador << '\n';
        if (turnoJogador == 1) {
            //Pede a coluna e linha do jogador
            coordenadasP1();
            
            tabelas[linhaP1][colunaP1] = 'X';

            printBoard();
            turnoJogador = turnoJogador + 1;
            //checa se ele venceu
            if (tabelas[0][0] == 'X' && tabelas[0][1] == 'X' && tabelas[0][2] == 'X') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
            if (tabelas[1][0] == 'X' && tabelas[1][1] == 'X' && tabelas[1][2] == 'X') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
            if (tabelas[2][0] == 'X' && tabelas[2][1] == 'X' && tabelas[2][2] == 'X') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }

            //
            if (tabelas[0][0] == 'X' && tabelas[1][0] == 'X' && tabelas[2][0] == 'X') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
            if (tabelas[0][1] == 'X' && tabelas[1][1] == 'X' && tabelas[2][1] == 'X') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
            if (tabelas[0][2] == 'X' && tabelas[1][2] == 'X' && tabelas[2][2] == 'X') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }

            //
            if (tabelas[0][0] == 'X' && tabelas[1][1] == 'X' && tabelas[2][2] == 'X') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
            if (tabelas[0][2] == 'X' && tabelas[1][1] == 'X' && tabelas[2][0] == 'X') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
        }
        else {
            //Turno do jogador2
            coordenadasP2();

            //Pede para digitar
            tabelas[linhaP2][colunaP2] = 'O';
            printBoard();
            turnoJogador = turnoJogador - 1;
            if (tabelas[0][0] == 'O' && tabelas[0][1] == 'O' && tabelas[0][2] == 'O') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
            if (tabelas[1][0] == 'O' && tabelas[1][1] == 'O' && tabelas[1][2] == 'O') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
            if (tabelas[2][0] == 'O' && tabelas[2][1] == 'O' && tabelas[2][2] == 'O') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
            if (tabelas[0][0] == 'O' && tabelas[1][0] == 'O' && tabelas[2][0] == 'O') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
            if (tabelas[0][1] == 'O' && tabelas[1][1] == 'O' && tabelas[2][1] == 'O') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
            if (tabelas[0][2] == 'O' && tabelas[1][2] == 'O' && tabelas[2][2] == 'O') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
            if (tabelas[0][0] == 'O' && tabelas[1][1] == 'O' && tabelas[2][2] == 'O') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
            if (tabelas[0][2] == 'O' && tabelas[1][1] == 'O' && tabelas[2][0] == 'O') {
                std::cout << "Parabens, player 1 venceu!";
                break;
            }
        }
        
        if (x == 8) {
            std::cout << "Deu velha \n";
        }




    }
}
void atividade3() 
{
   //Pede o nome do jogador1
   std::string jogador1;
   std::cout << "Digite o nome do jogador1: \n";
   std::getline(std::cin, jogador1);

   //Pede o nome do jogador2
   std::string jogador2;
   std::cout << "Digite o nome do jogador2: \n";
   std::getline(std::cin, jogador2);
   
   printBoard();
   jogo();


   std::cout << "Final de jogo \n";
   std::cin >> jogador1;
}

