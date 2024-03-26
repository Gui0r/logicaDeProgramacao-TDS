#include <iostream>

int main(){
    float C;
    float F;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &C);

    F = (C * 9/5) + 32;

    printf("Seus graus em Fahrenheit são: %.2f", F);
}