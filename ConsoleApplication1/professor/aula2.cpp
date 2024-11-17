#include <string>
#include <iostream>

void aula2()
{
    double precosInit[3] = { 5.50, 35, 7};
    double precos[3];

    precos[0] = 5.50;
    precos[1] = 35;
    precos[2] = 7;

    for (int i = 0; i < 4; i++) {
        std::cout << "Preco posicao " << i << " = " << precos[i]<< "\n"; 
    }

    char ticTacToe[3][3] = {
    {'X', 'O','X'},
    {'X', 'O','O'},
    {'O', 'X','X'}
    };
    
    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            std::cout << ticTacToe[i][x];    
        }
        std::cout << "\n";
    }
}