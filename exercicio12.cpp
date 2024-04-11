#include <iostream>

int main(){

float num1, num2, num3, num4, num5;

printf("Digite a primeira nota: ");
scanf("%f", &num1);
printf("Digite a segunda nota: ");
scanf("%f", &num2);
printf("Digite a terceira nota: ");
scanf("%f", &num3);
printf("Insira sua presença na cadeira: ");
scanf("%f", &num4);

num5 = (num1 + num2 + num3) / 3;

if (num5 >= 7 && num4 == 100) {
        printf("Aprovado. Parabéns!\n");
    } else if (num5 >= 7 || (num5 >= 5 && num5 < 7 && num4 >= 75)) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}