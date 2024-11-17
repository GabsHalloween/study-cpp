#include <string>
#include <iostream>

void atividade1()
{
    //Caclculadora de notas//
    std::string nomeAluno;
    std::cout << "Nome do aluno\n";
    std::getline(std::cin, nomeAluno);

    int quantidadeNotas;
    std::cout << "Numero de notas\n";
    std::cin >> quantidadeNotas;
    
    int vezesRepeticoes = 0;
    double notas;
    double somaDeNotas = 0;
    while (vezesRepeticoes < quantidadeNotas)
    {
        std::cout << "Insira a nota do aluno\n";
        std::cin >> notas;
        somaDeNotas += notas;
        
        vezesRepeticoes = vezesRepeticoes + 1;
    }
    double mediaNotasAluno = somaDeNotas / quantidadeNotas;
    std::cout << "Media das notas do " << nomeAluno << '\n';
    std::cout << mediaNotasAluno;
}