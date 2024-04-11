#include <cstdio>

int main() {
    float num1, num2, num3, num4;

    printf("Digite a nota atual do aluno na disciplina: ");
    scanf("%f", &num1);

    printf("Digite a nota da recuperação do aluno: ");
    scanf("%f", &num2);

    printf("Digite a porcentagem de presença do aluno: ");
    scanf("%f", &num3);

    if (num1 < 7 && num1 >= 5) {
        num4 = num1 + num2;
        if (num3 >= 75 && num4 >= 10) {
            printf("Aprovado\n");
            printf("Nota final: %.2f\n", num4);
            printf("Presença: %.2f%%\n", num3);
        } else {
            printf("Reprovado\n");
            printf("Nota final: %.2f\n", num4);
            printf("Presença: %.2f%%\n", num3);
        }
    } else{
        printf("Aluno não precisa de recuperação, Nota atual: %.2f\n",num1);
    }

    return 0;
}