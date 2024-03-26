#include <iostream>

int main(){
    //Exercicio 1
    int a = 5;
    int b = 3;
    int c = 10;
    bool resultado = (a > b && a < c);

    printf("True or false?: %s\n", resultado ? "true" : "false");
   
    return 0;

    //Exercicio 2

    int a = 7;
    int b = 10;
    int c = 6;
    int d = 8;
    bool resultado = (a == b || c < d);

    printf("True or false?: %s\n", resultado ? "true" : "false");

}