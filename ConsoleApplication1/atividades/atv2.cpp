#include <string>
#include <iostream>


void atividade2()
{
    //Pede o nome do aluno
    std::string nomeAluno;
    std::cout << "Nome do Aluno \n";
    std::getline(std::cin, nomeAluno);

    //Pede a quantidade de notas
    int quantidadeNotas = 0;
    std::cout << "Quantidade de notas \n";
    std::cin >> quantidadeNotas;
    
    //pede a nota e comeca o looping
    double* totalNotas = new double(0);
    double* notas = new double[quantidadeNotas];
    for (int i = 0; i < quantidadeNotas; i++)
    {
        std::cout << "Nota " << i << '\n';
        std::cin >> notas[i];
        *totalNotas += notas[i];
    }
    //calcula a media de notas
    double mediaNotas;
    mediaNotas = *totalNotas / quantidadeNotas;
    for (int x = 0; x < quantidadeNotas; x++)
    {
        std::cout << "nota " << x << '\n';
        std::cout << notas[x] << '\n';
    }
    
    std::cout << "Media de notas " << nomeAluno << '\n';
    std::cout << mediaNotas;
    
    
    
    

    



    
    

}