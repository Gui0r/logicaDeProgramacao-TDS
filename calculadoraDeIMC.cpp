#include <iostream>

int main(){
    float peso;
    float altura;
    float IMC;

    printf("Digite seu peso em Kilogramas: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

     IMC = peso / (altura * altura);

    printf("Seu IMC é: %.2f", IMC);
}