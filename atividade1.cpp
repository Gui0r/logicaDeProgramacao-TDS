#include <iostream>

int main() {

    std::string nome;
    int idade;

    printf("Digite seu nome: ");
    std::cin >> nome;

    printf("Agora digite a sua idade: ");
    scanf("%d", &idade);

    printf("Bem vindo a este software %s, você tem %d anos", nome.c_str(), idade);
   

    return 0;
}
