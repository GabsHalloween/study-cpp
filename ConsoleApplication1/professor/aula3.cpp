#include <string>
#include <iostream>

bool isNotaAzul(int);
void incrementa(int);
void incrementa(int, int, int, int);
void incrementa(int*);

int globalInteger = 10;

void aula3() {
    int inteiro = 2; //Sem ponteiro
    int* inteiroPtr = &inteiro;
    std::cout << &inteiro << "\n"; //Referencia de memoria de uma variavel sem ponteiro
    
    int* intPtr= new int(2); //Com ponteiro
    std::cout << intPtr << "\n"; //Print valor memoria
    std::cout << *intPtr<< "\n" ; //Print do valor do ponteiro
    
    int* notas= new int[*intPtr]; //Alocacao de vetor dinamico
    for (int i = 0; i < *intPtr; i++)
    {
        std::cout << "Nota " << i << '\n';
        std::cin >> notas[i];
    }
    
    std::cout << "\n\n";
    
    for (int i = 0; i < *intPtr; i++)
    {
        std::cout << notas[i] << " = ";
        if (isNotaAzul(notas[i])){ //Funcao que retorna valor
            std::cout << "E azul \n";
        } else
        {
            std::cout << "Vermelha \n";
        }
    }


    int numero = 10;
    std::cout << "Valor numero  = " << numero << "\n";
    incrementa(numero); //Procedure Passando parametro como copia
    std::cout << "Valor numero  = " << numero << "\n";
    incrementa(&numero); //Procedure Pegar a referencia de uma variavel q n 'e ponteiro
    std::cout << "Valor numero  = " << numero << "\n";
    
    int* numero2 = new int(10); //Instanciando um int ponteiro com valor 10
    std::cout << "Valor numero2  = " << *numero2 << "\n";
    incrementa(numero2); 
    std::cout << "Valor numero2  = " << *numero2 << "\n";
}

bool isNotaAzul(int nota) {
    return nota >= 6;
}

//Sobrecarga de metodo
//Significa q vc pode ter metodos com o mesmo nome
//desde que tenham assinaturas de metodo diferentes
void incrementa(int numero) {
    numero +=10;
}

void incrementa(int numero, int dois, int tres, int quatro) {
    numero +=10;
}

void incrementa(int* numero) {
    *numero +=10;
}
