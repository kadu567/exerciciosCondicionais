#include <iostream>

int main(){
    int num;
   
    printf("Digite um numero: ");
    scanf("%d!", &num) ;

    if (num %15 == 0) {
        printf("O numero digitado é multiplo de 3 e 5.\n");
    } else {
        printf("O numero digitado nao é multiplo de 3 e 5.\n");
    }

    return 0;
}