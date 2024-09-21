#include <stdio.h>

int main() {
    printf("-------------\n");
    printf("-Calculadora-\n");
    printf("-------------\n\n");

    int escolhaopcao;
    double num1;
    double num2;
    double resultado;

    while(1){
        printf("1- Adição\n");
        printf("2- Subtração\n");
        printf("3- Divisão\n");
        printf("4- Multiplicação\n");
        printf("0- Sair\n\n");

        printf("Escolha uma opção: ");
        scanf("%d", &escolhaopcao);

        if (escolhaopcao == 0) {
            printf("Finalizando app...\n\n");
            break;
        }

        if (escolhaopcao == 1) {
            printf("\nAdição\n\n");

            printf("Escolha o primeiro número: ");
            scanf("%lf", &num1);

            printf("\n");

            printf("Escolha o segundo número: ");
            scanf("%lf", &num2);

            resultado = num1 + num2;
            printf("Resultado: %.2lf\n\n\n", resultado);
            continue;

        }else if (escolhaopcao == 2) {

            printf("\nSubitração\n\n");

            printf("Escolha o primeiro número: ");
            scanf("%lf", &num1);

            printf("\n");

            printf("Escolha o segundo número: ");
            scanf("%lf", &num2);

            resultado = num1 - num2;
            printf("Resultado: %.2lf\n\n\n", resultado);
            continue;

        }else if (escolhaopcao == 3){

            printf("\nDivisão\n\n");

            printf("Escolha o primeiro número: ");
            scanf("%lf", &num1);

            printf("\n");

            printf("Escolha o segundo número: ");
            scanf("%lf", &num2);

            resultado = num1 / num2;
            printf("Resultado: %.2lf\n\n\n", resultado);
            continue;

        }else{

            printf("\nMultiplicação\n\n");

            printf("Escolha o primeiro número: ");
            scanf("%lf", &num1);

            printf("\n");

            printf("Escolha o segundo número: ");
            scanf("%lf", &num2);

            resultado = num1 * num2;
            printf("Resultado: %.2lf\n\n\n", resultado);
            continue;
        }
    }
}