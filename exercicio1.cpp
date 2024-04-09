#include <iostream>

int main(){
    int num;
   
    printf("Digite um numero: ");
    scanf("%d", &num) ;

    if (num % 2 == 0) {
        printf("O numero digitado é par.\n");
    } else {
        printf("O numero digitado é ímpar.\n");
    }

    return 0;
}