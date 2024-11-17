#include <string>
#include <iostream>

// std::cout << a << '\n';
// std::cout << b << '\n';
// std::cout << c << '\n';
// std::cout << d << '\n';
// std::cout << s << '\n';
// std::getline(std::cin, s); //Vem da lib STRING
// std::cout << s << '\n';

void aula1()
{
    // std::cout << "Hello world!\n";


    //Tipos de variaveis
    int a = 10;
    float b = 3.5;
    char c = 'u';
    bool d = true;


    //Operadores
    // + soma
    // - subtracao
    // / divisao
    // * multiplicacao
    // % (mod) resto
    // ^ potncia
    // == equalidade
    // != diferenca

    // ! (not)
    // AND &&
    // OR ||
    // XOR ?????

    bool verdadeiro = true;
    bool falso = false;

    //Exemplo operador NOT
    !verdadeiro; //false
    !falso; //true

    //String da lib STD
    std::string keepLooping = "sim";


    //Printa enquanto for menor que 5
    int count = 0;
    while (count < 5)
    {
        std::cout << "Gabriel" << "\n";
        count = count+1;
        //count+=1;
        //count++;
    }

    //While
    while (keepLooping == "sim" ||  keepLooping == "s" || keepLooping == "S")
    {
        std::cout << "Gabriel" << "\n";
        std::cout << "Continuar?" << "\n";
        std::getline(std::cin,keepLooping);
    }

    //While com break
    while (true)
    {
        std::cout << "Luis" << "\n";
        std::cout << "Continuar?" << "\n";
        std::getline(std::cin,keepLooping);
        // if (keepLooping == "sim" ||  keepLooping == "s" || keepLooping == "S")
        // {
        //     
        // } else
        // {
        //     break;
        // }

        //Exemplo de invers|ao logica or
        if (!(keepLooping == "sim" ||  keepLooping == "s" || keepLooping == "S"))
        {
            break;
        }
    }
}