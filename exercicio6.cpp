#include <iostream>

int main(){
    int num;
   
    printf("Digite um ano: ");
    scanf("%d!", &num) ;

    if ((num %4 == 0) && (num %100 == 0) || (num %4 == 0) && (num %400 == 0)) {
    printf("O ano é bissexto");
    } else
    printf("O ano não é bissexto");
    
    return 0;
}