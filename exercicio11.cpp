#include <iostream>

int main(){

int num1;

printf("Quantidade de leads recebida no dia: ");
scanf("%d", &num1);

if(num1 <= 5){
    printf("Baixa");
} else if(num1 >= 6 && num1 <= 10) {
    printf("Esperada");
} else if(num1 >= 11) {
    printf("Alta");
}

return 0;
}
