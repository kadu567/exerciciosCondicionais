#include <iostream>

int main(){
    int num1, num2, num3;
   
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d!", &num1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%d!", &num2);
    printf("Digite o terceiro lado do triangulo");
    scanf("%d!", &num3);    
    
    if ((num1 == num2) && (num2 == num3)) {
        printf("O triangulo é Equilatero.\n");
    } else if ((num1 == num2) || (num2 == num3) || (num1 == num3)) {
        printf("O triangulo é Isósceles.\n");
    } else if ((num1 != num2) || (num2 != num3) || (num1 != num3)) {
        printf("O triangulo é Escaleno.\n");
    }
    return 0;
}