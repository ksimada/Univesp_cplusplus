#include <iostream>

// Toda variável deve ser declarada e todo comando deve terminar com ;
int main(){
    int number1;
    int number2;

    // O std:: é o namespace usado para comandos da biblioteca padrão, standard. Cada biblioteca tem um namespace podendo ser karinestd::
    std:: cout << "Digite o primeiro número:";
    std:: cin >> number1;
    std:: cout << "Digite o segundo número:";
    std:: cin >> number2;

    // Operações matemáticas
    int sum = number1 + number2;
    int sub = number1 - number2;
    int mult = number1 * number2;
    int div = number1 / number2;
    float fdiv = (float)number1 / (float)number2;
    int res = number1 % number2;

    std::cout << "Soma:"<< sum << std::endl;
    std::cout << "Subtração:" << sub << std::endl;
    std::cout << "Multiplicação:" << mult << std::endl;
    std::cout << "Divisão:" << div << std::endl;
    std::cout << "Divisão real:" << fdiv << std::endl;
    std::cout << "Resto:" << res << std::endl;

    return 0;
}
