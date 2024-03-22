#include <iostream>

int main()
{
    // Declara e inicializa variaveis
    int numero = 10;
    float pi = 3.14159;
    char letra = 'A';
    std::string nome = "Ana";
    bool isTrue = true;
 
    // usa printf para imprimir os valores na tela
    printf("numero: %d\n", numero);
    printf("pi: %.2f\n", pi);
    printf("letra: %c\n", letra);
    printf("nome: %s\n", nome.c_str());
    printf("isTrue: %d\n", isTrue);

    return 0;
}