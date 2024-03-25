#include <iostream>

int main() {

    std::string nome;
    int idade;

    printf("Digite seu nome: ");
    std::cin >> nome;

    printf("Agora digite a sua idade: ");
    scanf("%d", &idade);

    printf("Bem vindo a este software: %s\n", nome.c_str());
   

    return 0;
}
