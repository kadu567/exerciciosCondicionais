#include <iostream>

int main(){

int num1;
int num2 = 1000;

printf("Quanto voce deseja sacar?");
scanf("%d", &num1);

if(num2 >= num1){
    printf("Voce possui saldo suficiente");
}else{
    printf("Voce nao pode sacar esse valor");
}
return 0;
}