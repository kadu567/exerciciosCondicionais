#include <iostream>

int main(){
    int num, num2;
   
    printf("Voce deseja converter Celsius para Fahrenheit(1) ou Fahrenheit para Celsius(2)? ");
    scanf("%d!", &num) ;
    printf("Digite a temperatura: ");
    scanf("%d!", &num2) ;
    
    if (num == 1){
    printf("A temperatura em Fahrenheit é %d\n.", (num2 / 1,8 )-32);
    } else if (num == 2){
    printf("A tempertarura em Celsius é %d\n." , (num2 * 1,8)+32);
    }
    return 0;
}