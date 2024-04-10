#include <iostream>

int main(){
    float num, num2;
    printf("Insira sua altura em metros: ");
    scanf("%f", &num);
    printf("Insira seu peso em quilogramas: ");
    scanf("%f", &num2);
    
float conta (num2 / (num * num));

printf("Seu IMC é: %f", conta);
    
    if (conta < 18.5) {
        printf(" Categoria: Abaixo do peso ");
    } else if (conta > 18.5 || conta >= 25){
        printf(" Categoria: Peso normal ");
    } else if (conta > 30){
        printf(" Categoria: Obeso ");
    }
    
    
    return 0;
}