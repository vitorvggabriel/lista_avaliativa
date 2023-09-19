#include <stdio.h>

int main() {

    int A, B;

 
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);


    if (A == B) {
        printf("Os valores lidos sao iguais.\n");
    } else {

        int maior, menor;
        if (A > B) {
            maior = A;
            menor = B;
        } else {
            maior = B;
            menor = A;
        }


        if (maior % menor == 0) {
            printf("O maior valor eh %d e eh multiplo do menor valor.\n", maior);
        } else {
            printf("O maior valor eh %d e nao eh multiplo do menor valor.\n", maior);
        }
    }

    return 0;
}